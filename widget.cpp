#include "widget.h"
#include "ui_widget.h"
#include<ingame.h>
#include<login.h>
#include <record.h>
#include<help.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(1140, 800));
    this->setMaximumSize(QSize(1140, 800));
    user = nullptr;
}

Widget::Widget(QWidget *parent,users *userTmp)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(1140, 800));
    this->setMaximumSize(QSize(1140, 800));
    user = userTmp;
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
    if(user != nullptr){
        Ingame *pic =new Ingame(nullptr,user);
        pic->show();
        this->close();
    }else{
        QMessageBox::information(this,"开始失败！","请先登录");
    }
}


void Widget::on_login_clicked()
{
    if(user == nullptr){
        Login *pic =new Login(nullptr,user);
        pic->show();
        this->close();
    }else{
        QMessageBox msgBox;
        msgBox.setWindowTitle("注意");
        msgBox.setText("已登录账号"+user->getAccount()+"，是否切换账号");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No); // 设置按钮为“是”和“否”
        msgBox.setDefaultButton(QMessageBox::No); // 设置默认按钮为“否”

        int ret = msgBox.exec(); // 显示消息框，并返回用户的选择

        if (ret == QMessageBox::Yes) {
            Login *pic =new Login(nullptr,user);
            pic->show();
            this->close();
        }
    }
}


void Widget::on_exit_clicked()
{
    this->close();
}


void Widget::on_record_clicked()
{
    Record *rec = new Record(nullptr,user);
    rec->show();
    this->close();
}



void Widget::on_help_clicked()
{
    Help *hel =new Help();
    hel->show();
}

