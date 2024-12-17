
#ifndef GEM_H
#define GEM_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QMovie>
#include <QDebug>

#define LEN 118

class Gem:public QPushButton
{
    Q_OBJECT
public:
    QString path_stable[100];// 存储静态图片的路径数组
    QString path_dynamic[100];// 存储动态图片（动画）的路径数组
    void initialPath();// 初始化静态和动态图片路径
    int type;// 宝石的类型（对应不同的图片）
    int x, y;  // 宝石的坐标位置
    void setY(int num){y=num;}

    int oriX,oriY;
    explicit Gem(int type, int len, int x, int y, QWidget *parent = nullptr, int offset=0);// 构造函数
    void bomb();// 宝石爆炸（销毁）的方法
    QMovie* spinGif;  // 动画效果指针（用于旋转动画）
    QLabel* spinLabel; // 显示旋转动画的标签
    QMovie* magicGif;  // 魔法效果的动画指针
    QLabel* magicLabel; // 显示魔法动画的标签
    QLabel* normalLabel; // 显示常规静态图片的标签

private:

signals:
    void mouseClickedGem(Gem*); // 鼠标点击宝石时的信号
};

#endif // GEM_H
