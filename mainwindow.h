#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setInterfaceStyle();

private slots:
    void on_xButton_clicked();

    void on_oButton_clicked();

    void on_StartButton_clicked();

    void onGameButtonClicked();

    void onCompSlot();

private:
    void ChangeButtonStyle(int row, int colomn, QString style);
    void SetStartButtonStyle();
    void start();
    void SetButtonProperties();
    void LockPlayer();
    void CompStep();
    void checkWInLoss(char LastSign);
    char arr[3][3];
    char player = 'X';
    int steps;
    bool game;
    bool playerLocked = true;
    bool stop = false;
    QTimer* timer;
    Ui::MainWindow *ui;
    void ChangeCrossNullButton(bool num);
};
#endif // MAINWINDOW_H
