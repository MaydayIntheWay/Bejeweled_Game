#include "widget.h"
#include "ui_widget.h"
#include<ingame.h>
#include<login.h>
#include<record.h>
#include<help.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(1140, 800));
    this->setMaximumSize(QSize(1140, 800));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/background.png"));
}

void Widget::on_start_clicked()
{
    Ingame *pic =new Ingame();
    pic->show();
    this->close();

}


void Widget::on_login_clicked()
{
    Login *pic =new Login();
    pic->show();
    this->close();

}


void Widget::on_exit_clicked()
{
    this->close();
}


void Widget::on_record_clicked()
{
    Record *rec = new Record();
    rec->show();
    this->close();
}



void Widget::on_help_clicked()
{
    Help *hel =new Help();
    hel->show();
}

