#include "record.h"
#include "ui_record.h"
#include<widget.h>
Record::Record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Record)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(1140, 800));
    this->setMaximumSize(QSize(1140, 800));
}

Record::~Record()
{
    delete ui;
}

void Record::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/InGame/background2.jpg"));
}


void Record::on_backHome2_clicked()
{
    Widget *wid =new Widget();
    wid->show();

    this->close();
}

