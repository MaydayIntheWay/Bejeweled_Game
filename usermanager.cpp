#include "userManager.h"

#include <QVariant>
#include <QDebug>
#include <QMessageBox>
#include <QWidget>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

using namespace std;

//构造函数
//初始化 UserManager 类的对象，并确保数据库连接的准备工作完成。
UserManager::UserManager() {
    connectToDatabase(); // 建立数据库连接
}

//析构函数
//在对象销毁时，检查数据库连接是否打开，并关闭连接以释放系统资源。
UserManager::~UserManager() {
    if(db.isOpen()){
        db.close();
    }
}

//负责初始化并建立数据库的连接
//创建一个数据库（Database）对象，并指定数据库的类型
//配置数据库路径或连接信息（如数据库文件路径、用户名、密码等）
//尝试打开数据库连接，并检查是否成功。
void UserManager::connectToDatabase() {
    //连接数据库
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("baoshiDataBase.db");

    if (!db.open()) {
        qDebug() << "Database connection failed:" << db.lastError().text();
    }
}

//验证用户输入的账号和密码是否存在于数据库中
//接收用户输入的账号和密码作为参数(login.ui 里的account和password)
//如果查询结果存在匹配项，返回 true，表示用户验证成功；否则返回 false
bool UserManager::validateUser(const QString &account, const QString &password) {
    QSqlQuery query;
    query.prepare("SELECT * FROM player WHERE account = :account");
    query.bindValue(":account", account);
    if (query.exec()) {
        // 查询成功
        while(query.next()){
            // 假设表中有一个 account 列和一个 password 列
            QString accountTmp = query.value(0).toString();
            QString passwordTmp = query.value(1).toString();
            if(passwordTmp == password){
                QMessageBox::information(nullptr, "登录成功！", "欢迎！"+accountTmp);
                return true;
            }else{
                //密码错误
                QMessageBox::information(nullptr, "登录失败！", "密码错误，请重试！");
                return false;
            }
        }
        // 查询失败，处理错误
        QMessageBox::information(nullptr, "登录失败！", "未查询到账号记录，请先注册或重试！");
        return false;
    }else{
        // 查询失败，处理错误
        QMessageBox::information(nullptr, "登录失败！", "请重试！");
        return false;
    }
}

//对数据库里的用户按照记录的高低进行排序，显示用户的账号名和记录，需要将每一条信息都打印在（record.ui里的Record1-10)的框里
QSqlQuery UserManager:: SortandPrint(){
    QSqlQuery query;
    // 升序排序
    bool success = query.exec("SELECT * FROM player ORDER BY score ASC");

    if (success) {
        return query;
    } else {
        qDebug() << "查询失败:" << query.lastError().text();
        //返回一个新建的无效的变量
        return QSqlQuery() ;
    }
}


bool UserManager::UserRegist(const QString accountTmp, const QString passwordTmp) {
    QSqlQuery query;
    // 检查用户名是否存在
    query.prepare("SELECT * FROM player WHERE account = :account");
    query.bindValue(":account", accountTmp);
    if (!query.exec()) {
        QMessageBox::critical(nullptr, "查询失败", query.lastError().text());
        return false;
    }

    if (query.next()) {
        QMessageBox::information(nullptr, "注册失败！", "已有账号记录，请重试！");
        return false;
    }

    // 插入新用户
    query.prepare("INSERT INTO player (account, password, score) VALUES (:account, :password, 0)");
    query.bindValue(":account", accountTmp);
    query.bindValue(":password", passwordTmp);
    if (!query.exec()) {
        QMessageBox::critical(nullptr, "注册失败", query.lastError().text());
        return false;
    }

    QMessageBox::information(nullptr, "注册成功！", "可以登录啦！");
    return true;
}
