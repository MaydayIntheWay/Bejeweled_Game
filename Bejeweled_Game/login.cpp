#include "login.h"
#include "ui_login.h"
#include <widget.h>
#include <rigist.h>
#include <QMessageBox> // 用于显示提示框

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(1140, 800));
    this->setMaximumSize(QSize(1140, 800));
}

Login::~Login()
{
    delete ui;
}

void Login::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, width(), height(), QPixmap(":/background.png"));
}

// 返回主界面按钮的点击事件
void Login::on_backHome2_clicked()
{
    Widget *wid = new Widget();
    wid->show();
    this->close();
}

// 注册按钮的点击事件
void Login::on_registBotton_clicked()
{
    Rigist *rig = new Rigist();
    rig->show();
    this->close();
}

//登录按钮的点击事件
//在完成下面这段代码之前，需要完成userManager.cpp文件
// 创建 UserManager 对象，并利用validateUser进行验证是否是有效的用户，若是则登陆成功
void Login::on_loginBotton_clicked()
{
            Widget *wid =new Widget();
            wid->show();

            //在这里写代码

            this->close();
}


