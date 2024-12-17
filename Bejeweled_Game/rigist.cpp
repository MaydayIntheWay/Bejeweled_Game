#include "rigist.h"
#include "qpainter.h"
#include "ui_rigist.h"
#include"users.h"
#include <login.h>

Rigist::Rigist(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Rigist)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(1140, 800));
    this->setMaximumSize(QSize(1140, 800));
}

Rigist::~Rigist()
{
    delete ui;
}

void Rigist::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/background.png"));
}

//在这里写代码
//1.需要判断该账号是否存在，若存在则报错
//2.需要获取（rigist.ui）passwordAdd和passwordEnsureAdd_2两个文本框的内容是否相等，若不相等则报错
//3.若1,2步未出错则注册成功，返回登录页面
void Rigist::on_loginBotton_clicked()
{
        Login *pic =new Login();
        pic->show();
        this->close();
}

