#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    void paintEvent(QPaintEvent * event);

private slots:
    void on_backHome2_clicked();

    void on_registBotton_clicked();

    void on_loginBotton_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
