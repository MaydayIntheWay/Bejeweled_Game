#include "login.h"
#include "ui_login.h"
#include<widget.h>
#include <rigist.h>

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
        painter.drawPixmap(0,0,width(),height(),QPixmap(":/background.png"));

}


void Login::on_backHome2_clicked()
{
    Widget *wid =new Widget();
    wid->show();
    this->close();


}


void Login::on_registBotton_clicked()
{
    Rigist *rig =new Rigist();
    rig->show();
    this->close();
}


void Login::on_loginBotton_clicked()
{
    if(1/*登录无特殊情况*/){
        Widget *wid =new Widget();
        wid->show();
        this->close();
    }
}

