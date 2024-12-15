/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *start;
    QPushButton *record;
    QPushButton *exit;
    QPushButton *login;
    QPushButton *help;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1140, 800);
        start = new QPushButton(Widget);
        start->setObjectName("start");
        start->setGeometry(QRect(440, 420, 151, 71));
        start->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/botton/Menu/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        start->setIcon(icon);
        start->setIconSize(QSize(250, 250));
        start->setFlat(true);
        record = new QPushButton(Widget);
        record->setObjectName("record");
        record->setGeometry(QRect(330, 650, 151, 71));
        record->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/botton/Menu/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        record->setIcon(icon1);
        record->setIconSize(QSize(250, 250));
        record->setFlat(true);
        exit = new QPushButton(Widget);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(860, 650, 151, 71));
        exit->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/botton/Menu/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon2);
        exit->setIconSize(QSize(250, 250));
        exit->setFlat(true);
        login = new QPushButton(Widget);
        login->setObjectName("login");
        login->setGeometry(QRect(80, 650, 151, 71));
        login->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/botton/Menu/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        login->setIcon(icon3);
        login->setIconSize(QSize(300, 250));
        login->setFlat(true);
        help = new QPushButton(Widget);
        help->setObjectName("help");
        help->setGeometry(QRect(580, 650, 151, 71));
        help->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/botton/Menu/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        help->setIcon(icon4);
        help->setIconSize(QSize(250, 250));
        help->setFlat(true);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        start->setText(QString());
        record->setText(QString());
        exit->setText(QString());
        login->setText(QString());
        help->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
