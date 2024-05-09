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

private:
    Ui::MainWindow *ui;
    void ChangeCrossNullButton(bool num);
};
#endif // MAINWINDOW_H
