#ifndef LOGIN_H
#define LOGIN_H

#include "users.h"
#include "userManager.h"
#include <QWidget>
#include <QPainter>
#include <QMessageBox> // 提示框

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    UserManager *userManager;
    users *user;
    explicit Login(QWidget *parent,users *userTmp);
    ~Login();
    void paintEvent(QPaintEvent *event);

private slots:
    void on_backHome2_clicked();
    void on_registBotton_clicked();
    void on_loginBotton_clicked();

private:
    Ui::Login *ui;
};


#endif // LOGIN_H
