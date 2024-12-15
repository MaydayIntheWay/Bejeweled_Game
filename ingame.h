#ifndef INGAME_H
#define INGAME_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class Ingame;
}

class Ingame : public QWidget
{
    Q_OBJECT

public:
    explicit Ingame(QWidget *parent = nullptr);
    ~Ingame();
    void paintEvent(QPaintEvent * event);


private slots:
    void on_backHome_clicked();

    void on_reset_clicked();

private:
    Ui::Ingame *ui;
};

#endif // INGAME_H
