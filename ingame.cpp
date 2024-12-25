#include "ingame.h"
#include "qpainter.h"
#include "ui_ingame.h"
#include <widget.h>

#include "users.h"

Ingame::Ingame(QWidget *parent,users *userTmp)
    : QWidget(parent)
    , ui(new Ui::Ingame)
{
    ui->setupUi(this);
    this->setMinimumSize(QSize(1140, 800));
    this->setMaximumSize(QSize(1140, 800));
    user = userTmp;
}

//这个函数将初始化游戏整体场景
void:: Ingame::setupScene(){

    //游戏状态初始化（得分为零）等

    //设置计时器并显示在界面中

    //可能额外的窗口和界面设置


    //开始循环播放音乐

      //开始记时

    //可能触发的动画效果

    //调用逻辑的判断与游戏结束

    //调用startgame()开始游戏
}

//这个函数将用于重置棋盘
void Ingame::reSetBoard(){
    //write code here
}

//将path的图片放置到label上，自适应label大小
//void GameWidget::setAdaptedImg(QString path,QLabel *label){}


//实现一个简单的延时功能，阻塞当前线程一段时间（msec 毫秒），并在此期间允许处理其他事件。
void Ingame::Sleep(int msec)
{
    //write code here
}

//这个函数的作用是控制是否可以与宝石进行交互
//传入 true 会禁用所有宝石的鼠标事件，传入 false 会重新启用这些事件
//通常这种方法用于游戏暂停或某些特殊状态下，防止玩家继续操作
void Ingame::forbidAll(bool forbid){
    //write code here
}

    //这个函数生成宝石随机数
int Ingame::randomGem(){

}

//这个函数用于根据不同的操作播放音效（例如交换，消除）
// void Ingame::playSound(int type){

// }
//这个函数用于开始游戏和完成游戏逻辑
void Ingame::startGame(){
    //需要随机生成宝石

    //遍历棋盘（8×8）初始化每个宝石
    //建宝石对象 Gem，并与其对应的界面窗口绑定
    //添加掉落动画 startfallAnimation 到动画组
    //连接信号 mouseClickedGem，点击宝石触发相应逻辑

    //动画启动

    //动画完成后的逻辑
    //(掉落动画完成后，重置分数显示
    //监听 eliminateFinished 信号，检查游戏状态：
    //如果游戏结束，退出逻辑。
    //调用 tipsdetect() 检查是否还有可消除的组合：
    //如果没有，则短暂等待后重置棋盘)

    //消除逻辑与积分更新

    //信号连接与游戏状态更新
}

//这个函数于游戏结束时让棋盘上的所有棋子从原位置向下掉落并最终移除
void Ingame::allFallOut(){
//write code here
}


//创建宝石（Gem）下落动画的函数
QPropertyAnimation* Ingame::startfallAnimation(Gem *gem, int h){
    //它根据宝石在棋盘上的初始位置和下落的行数（h），动态生成

    //返回一个 QPropertyAnimation 对象，控制宝石从初始位置下落到目标位置的动画效果

}

//响应玩家点击宝石的行为
void Ingame::act(Gem* gem){
//    选中宝石：如果没有选中的宝石，则将当前点击的宝石设为选中状态，并显示选中效果。

//    交换宝石：如果点击的宝石与已选中的宝石相邻，则触发交换动作，同时处理宝石匹配、爆炸、得分等逻辑。

//    取消选中：如果点击的宝石是当前选中的宝石，则取消选中。

//    重新选中其他宝石：如果点击的宝石与选中的宝石不相邻且不是自己，则切换选中状态。

}

//执行两个宝石在棋盘上的位置交换动画
void Ingame::swap(int SX, int SY, int gemX, int gemY){
//write code here
}

//函数用于实现单颗宝石的下落动画。通过控制宝石的几何属性（geometry），模拟其从当前位置向下移动一段距离的效果。
//函数同时控制鼠标事件的屏蔽和恢复，保证动画期间宝石不受玩家操作影响。
void Ingame::fallAnimation(Gem *gem, int h){
//write code here
}

//函数用于实现单颗宝石在填充新位置时的下落动画。
//这是填充宝石逻辑的一部分，既包含下落动画的视觉表现，也涉及动画完成后的逻辑处理（如状态更新和信号触发）。
void Ingame::fillfallAnimation(Gem *gem, int h){
//write code here
}

//负责实现宝石下落的核心逻辑
//尤其是在宝石消除后，为了填补空缺，其他宝石会从上方“下落”到空缺的位置
void Ingame::fall(){
//write code here
}

//负责在宝石消除后填补空缺的逻辑
void Ingame::fill(){
//write code here
}

//函数用于检查当前游戏板上的宝石是否满足消除条件。它会遍历整个 8x8 的宝石网格，
//并根据一定的规则（例如相同类型的宝石相连）来检测哪些宝石应该被消除
int Ingame::updateBombList(){
//write code here
}

//函数用于检测当前游戏盘面上是否存在可以匹配消除的宝石组合。
//它通过检查相邻的宝石类型并尝试找出合适的交换位置，提供给玩家一些提示。
Point Ingame::tipsdetect(){
//write code here
}

//函数主要用于处理游戏中的宝石消除逻辑。当玩家进行宝石匹配并消除时，
//该函数负责处理消除动画、宝石掉落的逻辑、更新游戏状态以及生成新的宝石。
void Ingame::eliminateBoard(){
//write code here
}

//该函数用于启动宝石的旋转动画。
void Ingame::makeSpin(int SX,int SY){
//write code here
}

//该函数用于停止宝石的旋转动画并恢复宝石的正常显示。
void Ingame::makeStopSpin(int SX,int SY){
//write code here
}

Ingame::~Ingame()
{
    delete ui;
}

void Ingame::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/InGame/background.jpg"));
}

void Ingame::on_backHome_clicked()
{
    Widget *wid =new Widget(nullptr,user);
    wid->show();
    this->close();

}

//重置棋盘 需要调用之前写好的reSetBoard()函数
void Ingame::on_reset_clicked()
{
//write code here
}


    //void Ingame::on_pause_clicked()
    //{
    //暂停
    //}


    //void Ingame::on_unpause_clicked()
    //{
    //恢复
    //}

