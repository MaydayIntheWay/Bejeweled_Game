#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <users.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    users *user;
    Widget(QWidget *parent = nullptr);
    Widget(QWidget *parent,users *userTmp);
    ~Widget();
    void paintEvent(QPaintEvent * event);

private slots:
    void on_start_clicked();

    void on_login_clicked();

    void on_exit_clicked();

    void on_record_clicked();

    void on_help_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
