#include "userManager.h"
//#include <QSqlQuery>
//#include <QVariant>
#include <QDebug>

//构造函数
//初始化 UserManager 类的对象，并确保数据库连接的准备工作完成。
UserManager::UserManager() {
    connectToDatabase(); // 建立数据库连接
}

//析构函数
//在对象销毁时，检查数据库连接是否打开，并关闭连接以释放系统资源。
UserManager::~UserManager() {

//在这里写代码

}

//负责初始化并建立数据库的连接
//创建一个数据库（Database）对象，并指定数据库的类型
//配置数据库路径或连接信息（如数据库文件路径、用户名、密码等）
//尝试打开数据库连接，并检查是否成功。
void UserManager::connectToDatabase() {

    //在这里写代码

}

//验证用户输入的账号和密码是否存在于数据库中
//接收用户输入的账号和密码作为参数(login.ui 里的account和password)
//如果查询结果存在匹配项，返回 true，表示用户验证成功；否则返回 false
bool UserManager::validateUser(const QString &account, const QString &password) {

    //在这里写代码

}

//对数据库里的用户按照记录的高低进行排序，显示用户的账号名和记录，需要将每一条信息都打印在（record.ui里的Record1-10)的框里
void UserManager:: SortandPrint(){

    //在这里写代码

}


