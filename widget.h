#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
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
