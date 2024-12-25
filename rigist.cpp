#include "rigist.h"
#include "qpainter.h"
#include "ui_rigist.h"
#include "users.h"
#include <login.h>
#include <widget.h>
#include <userManager.h>
#include <QMessageBox>

Rigist::Rigist(QWidget *parent,users *userTmp)
    : QWidget(parent)
    , ui(new Ui::Rigist)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(1140, 800));
    this->setMaximumSize(QSize(1140, 800));
    //连接信号和槽
    //connect(ui->ensureBotton,&QPushButton::clicked,this,&Rigist::on_ensureBotton_clicked);
    //connect(ui->backHome2,&QPushButton::clicked,this,&Rigist::on_backHome2_clicked);
    //创建数据库连接
    userManager = new UserManager();
    user = userTmp;
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
void Rigist::on_ensureBotton_clicked()
{
    if(ui->passwordAdd->text() == ui->passwordEnsureAdd_2->text()){
        if(userManager->UserRegist(ui->accontAdd->text(),ui->passwordAdd->text())){
            Login *pic =new Login(nullptr,user);
            pic->show();
            this->close();
        }
    }else{
        QMessageBox::information(nullptr, "注册失败！", "密码不一致！请重试！");
    }
 }


void Rigist::on_backHome2_clicked()
{
    Widget *wid = new Widget();
    wid->show();
    this->close();
}

