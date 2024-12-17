#ifndef RECORD_H
#define RECORD_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class Record;
}

class Record : public QWidget
{
    Q_OBJECT

public:
    explicit Record(QWidget *parent = nullptr);
    ~Record();
    void paintEvent(QPaintEvent * event);

private slots:
    void on_backHome2_clicked();

private:
    Ui::Record *ui;
};

#endif // RECORD_H
