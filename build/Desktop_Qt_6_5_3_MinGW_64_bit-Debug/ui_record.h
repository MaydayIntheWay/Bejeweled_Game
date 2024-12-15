/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Record
{
public:
    QPushButton *backHome2;
    QWidget *widget;
    QLineEdit *Record1;
    QLineEdit *Record2;
    QLineEdit *Record3;
    QLineEdit *Record4;
    QLineEdit *Record5;
    QLineEdit *Record6;
    QLineEdit *Record7;
    QLineEdit *Record8;
    QLineEdit *Record9;
    QLineEdit *Record10;
    QTextEdit *textEdit;
    QPushButton *thrash_b;
    QPushButton *thrash_b_2;

    void setupUi(QWidget *Record)
    {
        if (Record->objectName().isEmpty())
            Record->setObjectName("Record");
        Record->resize(1140, 800);
        backHome2 = new QPushButton(Record);
        backHome2->setObjectName("backHome2");
        backHome2->setGeometry(QRect(50, 660, 101, 101));
        backHome2->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/InGame/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        backHome2->setIcon(icon);
        backHome2->setIconSize(QSize(100, 100));
        backHome2->setFlat(true);
        widget = new QWidget(Record);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(430, 40, 561, 671));
        widget->setStyleSheet(QString::fromUtf8("background-color:rgb(178,130,78)"));
        Record1 = new QLineEdit(widget);
        Record1->setObjectName("Record1");
        Record1->setGeometry(QRect(10, 60, 541, 41));
        Record1->setStyleSheet(QString::fromUtf8("background-color:rgb(178,130,78)"));
        Record2 = new QLineEdit(widget);
        Record2->setObjectName("Record2");
        Record2->setGeometry(QRect(10, 120, 541, 41));
        Record3 = new QLineEdit(widget);
        Record3->setObjectName("Record3");
        Record3->setGeometry(QRect(10, 180, 541, 41));
        Record4 = new QLineEdit(widget);
        Record4->setObjectName("Record4");
        Record4->setGeometry(QRect(10, 240, 541, 41));
        Record5 = new QLineEdit(widget);
        Record5->setObjectName("Record5");
        Record5->setGeometry(QRect(10, 300, 541, 41));
        Record6 = new QLineEdit(widget);
        Record6->setObjectName("Record6");
        Record6->setGeometry(QRect(10, 360, 541, 41));
        Record7 = new QLineEdit(widget);
        Record7->setObjectName("Record7");
        Record7->setGeometry(QRect(10, 420, 541, 41));
        Record8 = new QLineEdit(widget);
        Record8->setObjectName("Record8");
        Record8->setGeometry(QRect(10, 480, 541, 41));
        Record9 = new QLineEdit(widget);
        Record9->setObjectName("Record9");
        Record9->setGeometry(QRect(10, 540, 541, 41));
        Record10 = new QLineEdit(widget);
        Record10->setObjectName("Record10");
        Record10->setGeometry(QRect(10, 610, 541, 41));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(240, 20, 91, 31));
        textEdit->setAutoFillBackground(false);
        textEdit->setReadOnly(true);
        thrash_b = new QPushButton(Record);
        thrash_b->setObjectName("thrash_b");
        thrash_b->setGeometry(QRect(390, 30, 651, 20));
        thrash_b->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/InGame/top frame.png"), QSize(), QIcon::Normal, QIcon::Off);
        thrash_b->setIcon(icon1);
        thrash_b->setIconSize(QSize(600, 100));
        thrash_b->setFlat(true);
        thrash_b_2 = new QPushButton(Record);
        thrash_b_2->setObjectName("thrash_b_2");
        thrash_b_2->setGeometry(QRect(390, 700, 651, 20));
        thrash_b_2->setStyleSheet(QString::fromUtf8("background:transparent"));
        thrash_b_2->setIcon(icon1);
        thrash_b_2->setIconSize(QSize(600, 100));
        thrash_b_2->setFlat(true);
        widget->raise();
        backHome2->raise();
        thrash_b->raise();
        thrash_b_2->raise();

        retranslateUi(Record);

        QMetaObject::connectSlotsByName(Record);
    } // setupUi

    void retranslateUi(QWidget *Record)
    {
        Record->setWindowTitle(QCoreApplication::translate("Record", "Form", nullptr));
        backHome2->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("Record", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">\345\216\206\345\217\262\350\256\260\345\275\225</span></p></body></html>", nullptr));
        thrash_b->setText(QString());
        thrash_b_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Record: public Ui_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
