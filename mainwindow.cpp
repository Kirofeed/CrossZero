#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "stylehelper.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setInterfaceStyle();
    game = false;
    SetButtonProperties();
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::onCompSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ChangeButtonStyle(int row, int colomn, QString style) {
    QGridLayout* grid = qobject_cast <QGridLayout*> (ui->widget->layout());
    QPushButton* btn = qobject_cast <QPushButton*> (grid->itemAtPosition(row, colomn)->widget());
    btn->setStyleSheet(style);
}

void MainWindow::ChangeCrossNullButton(bool num) {
    if (num) {
        ui->xButton->setStyleSheet(stylehelper::GetCrossButtonActiveStyle());
        ui->oButton->setStyleSheet(stylehelper::GetNullButtonPassiveStyle());
    }
    else {
        ui->xButton->setStyleSheet(stylehelper::GetCrossButtonPassiveStyle());
        ui->oButton->setStyleSheet(stylehelper::GetNullButtonActiveStyle());
    }
}

void MainWindow::setInterfaceStyle() {
    this->setStyleSheet(stylehelper::GetMainWidgetStyle());
    ui->widget->setStyleSheet(stylehelper::GetPlayButtonStyle());
    ui->xButton->setStyleSheet(stylehelper::GetCrossButtonActiveStyle());
    ui->oButton->setStyleSheet(stylehelper::GetNullButtonPassiveStyle());
    ui->StartButton->setStyleSheet(stylehelper::GetInterfaceButtonStyle());
    ui->label->setStyleSheet(stylehelper::GetNormLabel());
    ui->label->setText("Крестики-Нолики");
}

void MainWindow::SetStartButtonStyle() {
    for (auto i = 0; i < 3; i++) {
        for (auto j = 0; j < 3; j++) {
            ChangeButtonStyle(i, j, stylehelper::GetEmptyButtonStyle());
        }
    }
}

void MainWindow::start()
{
    SetStartButtonStyle();
    for (auto i = 0; i < 3; i++) {
        for (auto j = 0; j < 3; j++) {
            arr[i][j] = '-';
        }
    }
    steps = 0;
    stop = false;
    if (!(player == 'X')) {
        CompStep();
    }
    ui->label->setText("Крестики-Нолики");
    ui->label->setStyleSheet(stylehelper::GetNormLabel());
}

void MainWindow::on_xButton_clicked()
{
    ChangeCrossNullButton(1);
    player = 'X';
}


void MainWindow::on_oButton_clicked()
{
    ChangeCrossNullButton(0);
    player = '0';
}


void MainWindow::on_StartButton_clicked()
{
    if (game) {
        playerLocked = true;
        ui->StartButton->setText("Играть");
        ui->oButton->setDisabled(false);
        ui->xButton->setDisabled(false);
        game = false;
    }
    else {
        start();
        LockPlayer();
        ui->StartButton->setText("Игра идёт...");
        ui->xButton->setDisabled(true);
        ui->oButton->setDisabled(true);
        game = true;
    }
}

void MainWindow::onGameButtonClicked()
{
    if(!playerLocked) {
        QPushButton* btn = qobject_cast <QPushButton*> (sender());
        int row = btn->property("row").toInt();
        int colomn = btn->property("colomn").toInt();
        if (arr[row][colomn] == '-') {
            QString style;
            if (player ==  'X') {
                style = stylehelper::GetXButtonStyle();
                arr[row][colomn] = 'X';
            }
            else {
                style = stylehelper::GetOButtonStyle();
                arr[row][colomn] = '0';
            }
            ChangeButtonStyle(row, colomn, style);
            playerLocked = true;
            steps++;
            checkWInLoss(player);
            CompStep();
        }
    }
}

void MainWindow::onCompSlot()
{
    char compSign;
    QString style;
    if (player == 'X') {
        compSign = '0';
        style = stylehelper::GetOButtonStyle();
    }
    else {
        compSign = 'X';
        style = stylehelper::GetXButtonStyle();
    }
    timer->stop();
    while (true) {
        int r = rand()%3;
        int c = rand()%3;
        if (arr[r][c] == '-') {
            arr[r][c] = compSign;
            ChangeButtonStyle(r, c, style);
            break;
        }
    }
    steps++;
    checkWInLoss(compSign);
    playerLocked = false;
}

void MainWindow::CompStep()
{
    if (stop) {
        return;
    }
    timer->start(2000);
}

void MainWindow::checkWInLoss(char LastSign)
{
    if((arr[0][0] == LastSign && arr[0][1] == LastSign && arr[0][2] == LastSign) ||
        (arr[1][0] == LastSign && arr[1][1] == LastSign && arr[1][2] == LastSign) ||
        (arr[2][0] == LastSign && arr[2][1] == LastSign && arr[2][2] == LastSign) ||

        (arr[0][0] == LastSign && arr[1][0] == LastSign && arr[2][0] == LastSign) ||
        (arr[0][1] == LastSign && arr[1][1] == LastSign && arr[2][1] == LastSign) ||
        (arr[0][2] == LastSign && arr[1][2] == LastSign && arr[2][2] == LastSign) ||

        (arr[0][0] == LastSign && arr[1][1] == LastSign && arr[2][2] == LastSign) ||
        (arr[2][0] == LastSign && arr[1][1] == LastSign && arr[0][2] == LastSign)) {
        playerLocked = true;
        stop = true;
        if (player == LastSign) {
            ui->label->setText("Победа!");
            ui->label->setStyleSheet(stylehelper::GetWinLabel());
        }
        else {
            ui->label->setText("Поражение!");
            ui->label->setStyleSheet(stylehelper::GetLossLabel());
        }
        game = false;
        ui->StartButton->setText("Играть");
        ui->xButton->setDisabled(false);
        ui->oButton->setDisabled(false);
        return;
    }
    else if (steps == 9) {
        ui->label->setText("Ничья!");
        playerLocked = true;
        stop = true;
        ui->xButton->setDisabled(false);
        ui->oButton->setDisabled(false);
    }
}

void MainWindow::SetButtonProperties() {
    QGridLayout* grid = qobject_cast <QGridLayout*> (ui->widget->layout());
    for (auto i = 0; i < 3; i++) {
        for (auto j = 0; j < 3; j++) {
            QPushButton* btn = qobject_cast <QPushButton*> (grid->itemAtPosition(i, j)->widget());
            btn->setProperty("row", i);
            btn->setProperty("colomn", j);
            connect(btn, &QPushButton::clicked, this, &MainWindow::onGameButtonClicked);
        }
    }
}

void MainWindow::LockPlayer()
{
    if (player == 'X') {
        playerLocked = false;
    }
    else {
        playerLocked = true;
    }
}



