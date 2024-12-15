#ifndef RIGIST_H
#define RIGIST_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class Rigist;
}

class Rigist : public QWidget
{
    Q_OBJECT

public:
    explicit Rigist(QWidget *parent = nullptr);
    ~Rigist();
void paintEvent(QPaintEvent * event);
private slots:
    void on_loginBotton_clicked();

private:
    Ui::Rigist *ui;
};

#endif // RIGIST_H
