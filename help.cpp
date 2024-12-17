#include "help.h"
#include "ui_help.h"
#include <widget.h>
Help::Help(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Help)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(848, 475));
    this->setMaximumSize(QSize(848, 475));
}

Help::~Help()
{
    delete ui;

}

void Help::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/InGame/background3.jpg"));
}

void Help::on_backHome2_clicked()
{
    Widget *wid =new Widget();
    this->close();
}

