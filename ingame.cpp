#include "ingame.h"
#include "qpainter.h"
#include "ui_ingame.h"
#include<widget.h>
Ingame::Ingame(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ingame)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(1140, 800));
    this->setMaximumSize(QSize(1140, 800));
}

Ingame::~Ingame()
{
    delete ui;
}

void Ingame::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/InGame/background.jpg"));
}

void Ingame::on_backHome_clicked()
{
    Widget *wid =new Widget();
    wid->show();
    this->close();

}


void Ingame::on_reset_clicked()
{
//重置按钮功能
}

