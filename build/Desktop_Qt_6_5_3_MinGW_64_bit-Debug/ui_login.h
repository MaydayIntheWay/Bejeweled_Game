/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLineEdit *accont;
    QLineEdit *password;
    QPushButton *loginBotton;
    QPushButton *registBotton;
    QPushButton *backHome2;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1140, 800);
        accont = new QLineEdit(Login);
        accont->setObjectName("accont");
        accont->setGeometry(QRect(460, 290, 421, 51));
        password = new QLineEdit(Login);
        password->setObjectName("password");
        password->setGeometry(QRect(460, 380, 421, 51));
        loginBotton = new QPushButton(Login);
        loginBotton->setObjectName("loginBotton");
        loginBotton->setGeometry(QRect(590, 490, 131, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/botton/Menu/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        loginBotton->setIcon(icon);
        loginBotton->setIconSize(QSize(250, 150));
        loginBotton->setFlat(true);
        registBotton = new QPushButton(Login);
        registBotton->setObjectName("registBotton");
        registBotton->setGeometry(QRect(590, 440, 141, 24));
        registBotton->setFlat(true);
        backHome2 = new QPushButton(Login);
        backHome2->setObjectName("backHome2");
        backHome2->setGeometry(QRect(50, 660, 101, 101));
        backHome2->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/InGame/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        backHome2->setIcon(icon1);
        backHome2->setIconSize(QSize(100, 100));
        backHome2->setFlat(true);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        accont->setInputMask(QString());
        accont->setText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        password->setText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        loginBotton->setText(QString());
        registBotton->setText(QCoreApplication::translate("Login", "\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237\347\202\271\346\255\244\350\277\233\350\241\214\346\263\250\345\206\214", nullptr));
        backHome2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
