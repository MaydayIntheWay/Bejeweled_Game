#ifndef USERS_H
#define USERS_H
#include <QString>
#include <iostream>

class users {  // 用户类
private:
    QString Account;   // 账号
    QString passWord;  // 密码
    int record;

public:
    // 构造函数
    users(QString acco, QString word)
        : Account(acco), passWord(word),record(0){}

    // 设置账号
    void setUserName(QString acco) {
        Account = acco;
    }

    // 设置密码
    void setPassWord(QString word) {
        passWord = word;
    }

    //设置记录
    void setRecord(int rec){
        record=rec;
    }

    // 获取账号
    QString getAccount() const {
        return Account;
    }

    // 获取密码
    QString getPassWord() const {
        return passWord;
    }

    //获取记录
    int getRecord(){
        return record;
    }

};


#endif // USERS_H
