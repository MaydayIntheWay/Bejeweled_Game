#ifndef USERMANAGER_H
#define USERMANAGER_H
#include <QString>
#include <QSqlDatabase> //数据库头文件
#include <QWidget>

//只是声明，具体的代码请到.cpp文件
class UserManager {
public:
    UserManager();                     // 构造函数
    ~UserManager();                    // 析构函数
    void connectToDatabase();          // 数据库连接方法
    bool validateUser(const QString &account, const QString &password);  // 验证用户的账号和密码是否有效
    QSqlQuery SortandPrint();//按记录的高低对用户进行排序并打印
    bool UserRegist(const QString accountTmp,const QString passwordTmp);//用户注册
    QSqlDatabase db;  // 数据库对象
private:
    QWidget widget;
};

#endif // USERMANAGER_H
