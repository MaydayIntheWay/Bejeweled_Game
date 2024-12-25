#ifndef RIGIST_H
#define RIGIST_H

#include <QWidget>
#include <QPainter>
#include <userManager.h>
#include <users.h>

namespace Ui {
class Rigist;
}

class Rigist : public QWidget
{
    Q_OBJECT

public:
    explicit Rigist(QWidget *parent,users *userTmp);
    UserManager *userManager = nullptr;
    users *user;
    ~Rigist();
void paintEvent(QPaintEvent * event);

private slots:
    void on_ensureBotton_clicked();

    void on_backHome2_clicked();

private:
    Ui::Rigist *ui;
};

#endif // RIGIST_H
