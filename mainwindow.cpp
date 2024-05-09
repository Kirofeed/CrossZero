#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "stylehelper.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setInterfaceStyle();
}

MainWindow::~MainWindow()
{
    delete ui;
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
}

void MainWindow::on_xButton_clicked()
{
    ChangeCrossNullButton(1);
}


void MainWindow::on_oButton_clicked()
{
    ChangeCrossNullButton(0);
}

