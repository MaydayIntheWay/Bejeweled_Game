#ifndef INGAME_H
#define INGAME_H

#include <iostream>
#include <string.h>
#include <QWidget>
#include <QKeyEvent>
#include <QLabel>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QSequentialAnimationGroup>
#include <QIcon>
#include <QTimer>
#include <QRandomGenerator>
#include "gem.h"
#include <QTime>
#include <QMainWindow>
#include<QTemporaryDir>
#include <QFont>
#include <QWidget>
#include <QPainter>
#include"gem.h"
#include"users.h"

extern users *user;

//用于表示一个二维坐标点
class Point{
public:
    int x;
    int y;
    Point(int x1,int y1){
        x=x1;
        y=y1;
    }

};

namespace Ui {
class Ingame;
}

// GameWidget类，继承自QMainWindow，是游戏的主窗口类
class Ingame : public QWidget
{
    Q_OBJECT

public:
    //用户信息
    users *user;

    // 构造函数，接受一个父窗口作为参数
    explicit Ingame(QWidget *parent,users *userTmp);
    ~Ingame();

    void paintEvent(QPaintEvent * event);

    void setupScene();

    //游戏的声音效果
    //QSoundEffect* sound;

private:
     //设置参数，可更改
//    bool gameOver = false;  // 游戏是否结束的标志
//    int FTime = 0;  // 用于计算或显示的时间
//    int mousePosX = -1, mousePosY = -1;  // 鼠标的当前位置
//    bool exitMagic = false;  // 是否退出魔法状态

//    int hintArrowTimes = 6;  // 提示箭头出现的次数
//    int score = 0;  // 当前得分
//    bool is_acting = false;  // 当前是否正在执行操作
//    bool is_paused = false;  // 游戏是否暂停
//    int eliminateTimes = 0;  // 消除次数

//    QSound *effect = nullptr;  // 游戏音效

//    QLabel* scoreTextLbl = nullptr;  // 显示分数的标签

//    QLabel* pauseBKLbl = nullptr;  // 暂停背景的标签
//    QMovie* pauseBKgif = nullptr;  // 暂停时背景的动画
//    QLabel* pauseTXLbl = nullptr;  // 暂停时的文本标签

//    int fallNum = 0;  // 掉落的宝石数量
//    int fallCount = 0;  // 掉落计数

//    unsigned int gemType[8][8];  // 宝石类型数组
//    Gem* gems[8][8];  // 存放宝石对象的二维数组
//    int fallHeight[8][8];  // 宝石掉落的高度数组
//    std::vector<Gem*> bombList;  // 存放要消除的宝石

    // 更新要消除的宝石列表
    int updateBombList();

//    QWidget* boardWidget = nullptr;  // 游戏的棋盘部件
//    HoverButton *reSetButton = nullptr;  // 重置按钮
//    HoverButton *menuButton = nullptr;  // 菜单按钮
//    HoverButton *hintButton = nullptr;  // 提示按钮
//    HoverButton *pauseButton = nullptr;  // 暂停按钮
//    MyProBar* progressBar = nullptr;  // 进度条
//    QTimer *progressTimer = nullptr;  // 进度条计时器
//    QLabel* selectedLbl = nullptr;  // 显示选择的标签
//    QTimer* timeoutTimer = nullptr;  // 超时计时器
//    QLabel* outLabel = nullptr;  // 用于显示超时信息的标签
//    QTimer* redBorderTimer = nullptr;  // 红框计时器
//    QLabel* redBorder = nullptr;  // 红框标签

//    int redBordershow = 0;  // 红框显示标志
//    double trans = 0;  // 透明度控制变量

    // 开始宝石掉落动画
    QPropertyAnimation* startfallAnimation(Gem *gem, int h);

    // 随机生成宝石类型
    int randomGem();

    // 播放音效
    //void playSound(int type);

    // 启动游戏
    void startGame();

    //延时函数
    void Sleep(int msec);

    //禁用或启用所有宝石的鼠标事件，常用于暂停或禁用玩家交互的场景。
    void forbidAll(bool forbid);

    // 执行宝石掉落
    void fall();

    // 填充新的宝石
    void fill();

    // 停止宝石旋转动画
    void makeStopSpin(int, int);

    // 启动宝石旋转动画
    void makeSpin(int, int);

    // 交换两个宝石的位置
    void swap(int, int, int gemX, int gemY);

    // 消除宝石
    void eliminateBoard();


    // 检测提示位置
    Point tipsdetect();

    // 完全消除所有宝石
    void allFallOut();


    // 执行宝石动作
    void act(Gem* gem);

    int selectedX = -1, selectedY = -1;  // 选择的宝石坐标


    // 重置游戏棋盘
    void reSetBoard();

    // 执行宝石掉落动画
    void fallAnimation(Gem *gem, int h);

    // 填充宝石的掉落动画
    void fillfallAnimation(Gem *gem, int h);

    Ui::Ingame *ui;// 游戏UI对象


signals:
    // 信号：消除完成
    void eliminateFinished();

    // 信号：鼠标移动事件
    //void myMouseMove(QMouseEvent*);

    // 信号：计时完成
    // void finishCount();

    // 返回主页
    void backHome();

    // 重置棋盘
    void resetBoard();

public slots:
    //返回主页
    void on_backHome_clicked();

    //重置棋盘
    void on_reset_clicked();

};



#endif // INGAME_H
