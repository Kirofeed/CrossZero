#include "stylehelper.h"

QString stylehelper::GetMainWidgetStyle() {
    return "QMainWindow {;"
    "   background-color: rgb(224, 230, 224)"
    "}"
           "QLabel {"
           "color : rgb(0, 0, 0);"
           "}";
}

QString stylehelper::GetPlayButtonStyle() {
    return  "QWidget {"
                "background: rgb(157, 161, 157)"
            "}"
            "QPushButton {"
                    "background-color: #6cacff;"
                    "border: 3px solid #ccc;"
                "}"
                "QPushButton::hover {"
                    "background-color: #4cacfc;"
                    "border: 1px solid black;"
               "}"
               "QPushButton::pressed {"
                    "background-color: #4cacfc;"
                    "border: none;"
               "}";

}

QString stylehelper::GetInterfaceButtonStyle() {
    return
    "QPushButton {"
        "background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0, "
                "stop:0.00568182 rgba(150, 161, 148, 255), stop:1 rgba(91, 161, 175, 255));"
        "border: 1px solid grey;"
        "border-radius: 19px;"
    "}"
    "QPushButton::hover {"
        "background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0, "
           "stop:0.00568182 rgba(184, 197, 181, 255), stop:1 rgba(133, 234, 255, 255));"
    "}"
    "QPushButton::pressed {"
        "background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0, "
                "stop:0.00568182 rgba(150, 161, 148, 255), stop:1 rgba(91, 161, 175, 255));"
        "border: 2px solid black;"
    "};";
}

QString stylehelper::GetCrossButtonActiveStyle(){
    return "QPushButton  {"
        "background-color: rgb(88, 78, 112);"
        "background-image: url(:/img/cross_small.png);"
        "background-repeat: no-repeat;"
        "background-position: center center;"
        "border-top-left-radius: 5px;"
        "border-bottom-left-radius: 5px;"
    "}";
}
QString stylehelper::GetCrossButtonPassiveStyle(){
    return "QPushButton  {"
           "background-color: rgb(115, 103, 147);"
           "background-image: url(:/img/cross_small.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "border-top-left-radius: 5px;"
           "border-bottom-left-radius: 5px;"
           "}";
}
QString stylehelper::GetNullButtonActiveStyle(){
    return "QPushButton  {"
           "background-color: rgb(88, 78, 112);"
           "background-image: url(:/img/zero_small.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "border-top-right-radius: 5px;"
           "border-bottom-right-radius: 5px;"
           "}";
}
QString stylehelper::GetNullButtonPassiveStyle(){
    return "QPushButton  {"
           "background-color: rgb(115, 103, 147);"
           "background-image: url(:/img/zero_small.png);"
           "background-repeat: no-repeat;"
           "background-position: center center;"
           "border-top-right-radius: 5px;"
           "border-bottom-right-radius: 5px;"
           "}";
}


QString stylehelper::GetEmptyButtonStyle() {
    return "QPushButton {"
    "background-color: #6cacff;"
    "border: 3px solid #ccc;"
    "}"
    "QPushButton::hover {"
    "background-color: #4cacfc;"
    "border: 1px solid black;"
    "}"
    "QPushButton::pressed {"
    "background-color: #4cacfc;"
    "border: none;"
    "}";
}

QString stylehelper::GetXButtonStyle() {
    return "QPushButton {"
                "background: #6cacff url(:/img/krestik.png) no-repeat center center;"
           "}";
}

QString stylehelper::GetOButtonStyle() {
    return "QPushButton {"
           "background: #6cacff url(:/img/nolik.png) no-repeat center center;"
           "}";
}

QString stylehelper::GetXWinButtonStyle() {
    return "QPushButton {"
           "background: rgb(10, 250, 10) url(:/img/krestik.png) no-repeat center center;"
           "}";
}

QString stylehelper::GetXLossButtonStyle() {
    return "QPushButton {"
           "background: rgb(255, 0, 40) url(:/img/krestik.png) no-repeat center center;"
           "}";
}

QString stylehelper::GetOWinButtonStyle() {
    return "QPushButton {"
           "background: rgb(10, 250, 10) url(:/img/nolik.png) no-repeat center center;"
           "}";
}

QString stylehelper::GetOLossButtonStyle() {
    return "QPushButton {"
           "background: rgb(255, 0, 40) url(:/img/nolik.png) no-repeat center center;"
           "}";
}

QString stylehelper::GetNormLabel()
{
    return "QLabel {"
                "background-color: none;"
           "}";
}

QString stylehelper::GetWinLabel()
{
    return "QLabel {"
                "background-color: green;"
           "}";
}

QString stylehelper::GetLossLabel()
{
    return "QLabel {"
                "background-color: red;"
           "}";
}


