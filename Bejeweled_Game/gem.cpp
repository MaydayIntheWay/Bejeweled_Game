#include "gem.h"
Gem::Gem(int type, int len, int x, int y, QWidget *parent, int offset) : QPushButton(parent), type(type), x(x), y(y)
{
    initialPath();// 初始化静态和动态的路径

    // 设置宝石的位置。oriX, oriY 计算宝石的显示坐标。
       // oriX 和 oriY 是根据宝石的 x 和 y 值以及每个宝石的尺寸 (LEN) 来决定的
    setGeometry(len*x, len*(y+offset), len, len);
    oriX = LEN*x;
    oriY = LEN*(y+offset);
    // y坐标加上offset，用于宝石在Y轴上的调整


    setVisible(true);
     // 设置宝石的样式，通过路径加载静态图片，path_stable[type] 是根据宝石类型来选择不同的图片
    setStyleSheet(QString("QPushButton{border-image:url(%1);}").arg(path_stable[type]));
    setIconSize(QSize(len, len));// 设置宝石图标的大小（根据传入的len）

    connect(this, &Gem::pressed, [=](){
        this->mouseClickedGem(this);// 连接点击事件，当用户点击宝石时，触发鼠标点击的信号，并传递当前宝石的指针
    });
}

void Gem::initialPath(){
    path_stable[0] = ":/picture/GameWidget/Gem/Magic.png";
    path_stable[1] = ":/picture/GameWidget/Gem/Red.png";
    path_stable[2] = ":/picture/GameWidget/Gem/orange.png";
    path_stable[3] = ":/picture/GameWidget/Gem/Green.png";
    path_stable[4] = ":/picture/GameWidget/Gem/Blue.png";
    path_stable[5] = ":/picture/GameWidget/Gem/violet.png";
    path_stable[6] = ":/picture/GameWidget/Gem/Silver.png";
    path_stable[7] = ":/picture/GameWidget/Gem/Gold.png";
    path_dynamic[0] = ":/picture/GameWidget/Gem/Magic.gif";
    path_dynamic[1] = ":/picture/GameWidget/Gem/Red.gif";
    path_dynamic[2] = ":/picture/GameWidget/Gem/orange.gif";
    path_dynamic[3] = ":/picture/GameWidget/Gem/Green.gif";
    path_dynamic[4] = ":/picture/GameWidget/Gem/Blue.gif";
    path_dynamic[5] = ":/picture/GameWidget/Gem/violet.gif";
    path_dynamic[6] = ":/picture/GameWidget/Gem/Silver.gif";
    path_dynamic[7] = ":/picture/GameWidget/Gem/Gold.gif";

    path_dynamic[11] = ":/picture/GameWidget/Gem/waterSQ.gif";
    path_dynamic[12] = ":/picture/GameWidget/Gem/goldSQ.gif";
}
void Gem::bomb(){
    delete this;
}
