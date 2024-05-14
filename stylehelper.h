#ifndef STYLEHELPER_H
#define STYLEHELPER_H


#include <QString>
#include <QTimer>

class stylehelper
{
public:
    static QString GetMainWidgetStyle();
    static QString GetPlayButtonStyle();
    static QString GetInterfaceButtonStyle();
    static QString GetCrossButtonActiveStyle();
    static QString GetCrossButtonPassiveStyle();
    static QString GetNullButtonActiveStyle();
    static QString GetNullButtonPassiveStyle();

    static QString GetEmptyButtonStyle();
    static QString GetXButtonStyle();
    static QString GetOButtonStyle();
    static QString GetXWinButtonStyle();
    static QString GetXLossButtonStyle();
    static QString GetOWinButtonStyle();
    static QString GetOLossButtonStyle();
    static QString GetNormLabel();
    static QString GetWinLabel();
    static QString GetLossLabel();
};

#endif // STYLEHELPER_H
