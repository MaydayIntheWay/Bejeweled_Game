#ifndef HOVERBUTTON_H
#define HOVERBUTTON_H

#include <QWidget>
#include <QPushButton>
#include <QEvent>
#include <QLabel>
#include <QPropertyAnimation>
#include <QTimer>


//可以先不用看这个文件！


//实现了一个自定义的按钮类 HoverButton，它继承自 QPushButton，
//通过重写事件处理函数和添加一些特殊的属性，使按钮能够在不同的鼠标事件下显示不同的效果（例如：鼠标悬停、按下、释放等）。

class HoverButton : public QPushButton
{
    //Q_OBJECT
public:
    //explicit HoverButton(QWidget *parent = nullptr);


    // 设置按钮的图像，pathNormal为正常状态下的图像路径，pathHover为鼠标悬停时的图像路径，
      // width和height为图像的宽高，label为一个可选的QLabel，用来显示文本
    //void setImage(QString pathNormal, QString pathHover, int width, int height,QLabel* label = nullptr);

    // 设置按钮的声音，pathHover为鼠标悬停时的声音，pathLeave为鼠标离开时的声音，
       // pathPress为按下时的声音，pathRelease为释放时的声音
    //void setSound(QString pathHover="", QString pathLeave="", QString pathPress="", QString pathRelease="");

    // 设置按钮显示的文本和字体大小
    //void setLabel(QString text,int size);

    //void setCircle(int r, int x, int y, int width, int height, QString path, QString path2, QWidget *parent);

    // 显示按钮的文本内容，并设置其字体大小
    //void showContent(QString text,int size);

    // 用于设置文字动画的QPropertyAnimation对象
    //QPropertyAnimation* textAnim = new QPropertyAnimation;

     // 按钮上的文本标签
    //QLabel label;


protected:
    // 事件处理函数，重写QPushButton的event函数，用于处理鼠标进入、离开、按下和释放等事件
   // bool event(QEvent *e) override;

private:
     // 按钮的宽高、文本大小等私有变量
   // int w=0, h=0,textSize;

    // 用于存放按钮状态下不同声音的指针，鼠标悬停、按下、释放、离开时的声音
    //QSound *soundHover = nullptr, *soundPress = nullptr, *soundRelease = nullptr, *soundLeave = nullptr;

    // 存放按钮正常状态和悬停状态的图标
    //QIcon iconNormal, iconHover;

};

#endif // HOVERBUTTON_H
