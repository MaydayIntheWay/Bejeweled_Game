/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QPushButton *backHome2;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName("Help");
        Help->resize(848, 475);
        backHome2 = new QPushButton(Help);
        backHome2->setObjectName("backHome2");
        backHome2->setGeometry(QRect(120, 310, 101, 101));
        backHome2->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/InGame/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        backHome2->setIcon(icon);
        backHome2->setIconSize(QSize(100, 100));
        backHome2->setFlat(true);
        textBrowser = new QTextBrowser(Help);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(340, 60, 361, 311));
        textBrowser->setStyleSheet(QString::fromUtf8("#MainWindow{border-image:rgb(255, 170, 0)}"));

        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QWidget *Help)
    {
        Help->setWindowTitle(QCoreApplication::translate("Help", "Form", nullptr));
        backHome2->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("Help", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Microsoft YaHei','PingFang SC','Heiti SC','sans-serif'; font-size:16pt; color:#333333;\">\302\240\302\240 </span><span style=\" font-family:'SimSun','STSong'; font-size:16pt; color:#333333;\">\344\270\211\346\266\210\345\237\272\346\234\254\347\216\251\346\263\225\357\274\214\344\270\211\344\270\252\345\220\214\346\240\267\346\243\213\345"
                        "\255\220\347\233\270\350\277\236\357\274\214\344\274\232\346\266\210\351\231\244</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Microsoft YaHei','PingFang SC','Heiti SC','sans-serif'; font-size:16pt; color:#333333;\">\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'SimSun','STSong'; font-size:16pt; color:#333333;\">\347\211\271\346\225\210\345\220\210\346\210\220</span><span style=\" font-family:'Microsoft YaHei','PingFang SC','Heiti SC','sans-serif'; font-size:16pt; color:#333333;\">\342\200\2244</span><span style=\" font-family:'SimSun','STSong'; font-size:16pt; color:#333333;\">\350\277\236\357\274\214</span><span style=\" font-family:'Microsoft YaHei','PingFang SC','Heiti SC','sans-serif'; font-size:16pt; color:#333333;\">T</span><span style=\" font-family:'SimSun','STSong'; font-size:16pt; color:#333333;\">\357\274\214</span><span"
                        " style=\" font-family:'Microsoft YaHei','PingFang SC','Heiti SC','sans-serif'; font-size:16pt; color:#333333;\">L</span><span style=\" font-family:'SimSun','STSong'; font-size:16pt; color:#333333;\">\357\274\214</span><span style=\" font-family:'Microsoft YaHei','PingFang SC','Heiti SC','sans-serif'; font-size:16pt; color:#333333;\">5</span><span style=\" font-family:'SimSun','STSong'; font-size:16pt; color:#333333;\">\350\277\236</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Microsoft YaHei','PingFang SC','Heiti SC','sans-serif'; font-size:16pt; color:#333333;\">\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'SimSun','STSong'; font-size:16pt; color:#333333;\">\347\211\271\346\225\210\350\247\246\345\217\221</span><span style=\" font-family:'Microsoft YaHei','PingFang SC','Heiti SC','sans-serif'; font-size:16pt; color:#333333;\">\342"
                        "\200\224</span><span style=\" font-family:'SimSun','STSong'; font-size:16pt; color:#333333;\">\347\211\271\346\225\210\346\243\213\345\255\220\345\206\215\346\254\241\345\244\204\344\272\216\345\217\257\345\220\210\346\210\220\347\232\204\345\272\217\345\210\227\345\206\205\357\274\214\345\210\231\350\247\246\345\217\221\347\211\271\346\225\210</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Microsoft YaHei','PingFang SC','Heiti SC','sans-serif'; font-size:16pt; color:#333333;\">\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'SimSun','STSong'; font-size:16pt; color:#333333;\">\357\274\210\347\211\271\346\225\210\346\243\213\345\255\220\344\272\244\346\215\242\344\270\215\350\247\246\345\217\221\357\274\211</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
                        "x; background-color:#ffffff;\"><span style=\" font-family:'Microsoft YaHei','PingFang SC','Heiti SC','sans-serif'; font-size:16pt; color:#333333;\">\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'SimSun','STSong'; font-size:16pt; color:#333333;\">\346\243\213\347\233\230\357\274\232\344\270\200\350\210\254\346\203\205\345\206\265\344\270\213\351\203\275\346\230\257\345\205\250\346\243\213\347\233\230\357\274\214\346\227\240\345\234\260\345\275\242\350\256\276\350\256\241</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Microsoft YaHei','PingFang SC','Heiti SC','sans-serif'; font-size:16pt; color:#333333;\">\302\240\302\240\302\240\302\240\302\240\302\240 </span><span style=\" font-family:'SimSun','STSong'; font-size:16pt; color:#333333;\">\346\216\211\350\220\275\350\247\204\345\210\231\357\274\232\347\233\264\347\272\277\346\216\211\350"
                        "\220\275\357\274\210\344\270\215\351\234\200\350\246\201\346\226\234\345\220\221\346\216\211\350\220\275\357\274\211</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
