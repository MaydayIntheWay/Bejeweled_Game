#ifndef HELP_H
#define HELP_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class Help;
}

class Help : public QWidget
{
    Q_OBJECT

public:
    explicit Help(QWidget *parent = nullptr);
    ~Help();
void paintEvent(QPaintEvent * event);
private slots:
    void on_backHome2_clicked();

private:
    Ui::Help *ui;
};

#endif // HELP_H
