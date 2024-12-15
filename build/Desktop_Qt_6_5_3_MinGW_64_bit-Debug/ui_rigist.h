/********************************************************************************
** Form generated from reading UI file 'rigist.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGIST_H
#define UI_RIGIST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rigist
{
public:
    QLineEdit *accontAdd;
    QLineEdit *passwordAdd;
    QLineEdit *passwordEnsureAdd_2;
    QPushButton *loginBotton;
    QPushButton *backHome2;

    void setupUi(QWidget *Rigist)
    {
        if (Rigist->objectName().isEmpty())
            Rigist->setObjectName("Rigist");
        Rigist->resize(1140, 800);
        accontAdd = new QLineEdit(Rigist);
        accontAdd->setObjectName("accontAdd");
        accontAdd->setGeometry(QRect(460, 290, 421, 51));
        passwordAdd = new QLineEdit(Rigist);
        passwordAdd->setObjectName("passwordAdd");
        passwordAdd->setGeometry(QRect(460, 380, 421, 51));
        passwordEnsureAdd_2 = new QLineEdit(Rigist);
        passwordEnsureAdd_2->setObjectName("passwordEnsureAdd_2");
        passwordEnsureAdd_2->setGeometry(QRect(460, 470, 421, 51));
        loginBotton = new QPushButton(Rigist);
        loginBotton->setObjectName("loginBotton");
        loginBotton->setGeometry(QRect(580, 560, 141, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/botton/Menu/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        loginBotton->setIcon(icon);
        loginBotton->setIconSize(QSize(1000, 400));
        loginBotton->setFlat(true);
        backHome2 = new QPushButton(Rigist);
        backHome2->setObjectName("backHome2");
        backHome2->setGeometry(QRect(50, 660, 101, 101));
        backHome2->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/InGame/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        backHome2->setIcon(icon1);
        backHome2->setIconSize(QSize(100, 100));
        backHome2->setFlat(true);

        retranslateUi(Rigist);

        QMetaObject::connectSlotsByName(Rigist);
    } // setupUi

    void retranslateUi(QWidget *Rigist)
    {
        Rigist->setWindowTitle(QCoreApplication::translate("Rigist", "Form", nullptr));
        accontAdd->setInputMask(QString());
        accontAdd->setText(QCoreApplication::translate("Rigist", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", nullptr));
        passwordAdd->setText(QCoreApplication::translate("Rigist", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        passwordEnsureAdd_2->setText(QCoreApplication::translate("Rigist", "\350\257\267\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        loginBotton->setText(QString());
        backHome2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Rigist: public Ui_Rigist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGIST_H
