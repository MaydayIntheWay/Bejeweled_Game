#include "rigist.h"
#include "qpainter.h"
#include "ui_rigist.h"
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

void Rigist::on_loginBotton_clicked()
{
    if(1/*注册的时候没有异常情况比如账号重复*/){
        Login *pic =new Login();
        pic->show();
        this->close();
    }
}

