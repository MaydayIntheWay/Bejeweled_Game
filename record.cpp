#include "record.h"
#include "ui_record.h"
#include "userManager.h"
#include<widget.h>
#include <QSqlQuery>
Record::Record(QWidget *parent,users *userTmp)
    : QWidget(parent)
    , ui(new Ui::Record)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(1140, 800));
    this->setMaximumSize(QSize(1140, 800));
    user = userTmp;
}

Record::~Record()
{
    delete ui;
}

void Record::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/InGame/background2.jpg"));
    UserManager *um = new UserManager();
    QSqlQuery qTmp = um->SortandPrint();
    if(qTmp.isActive()){
        int num = 1;
        while(qTmp.next()){
            QString account = qTmp.value(0).toString();
            QString score = qTmp.value(2).toString();
            QString recordObjectName = "Record" + QString::number(num);
            QLineEdit *recordLineEdit = findChild<QLineEdit *>(recordObjectName);
            if (recordLineEdit) {
                recordLineEdit->setText(account+"      "+score);
            } else {
                qDebug() << "未找到对应的记录组件:" << recordObjectName;
            }
            num++;
            if(num>=11) break;
        }
    }
    // 此时 db 和 query 都超出作用域自动释放了。
    // QSqlDatabase::removeDatabase(um->db.connectionName());

}


void Record::on_backHome2_clicked()
{
    Widget *wid =new Widget(nullptr,user);
    wid->show();

    this->close();
}

