# 把我找到的教程复制黏贴在这里了 大家可以看看
## 万一有什么问题还是得gpt 俺也不懂TT

### 1.下载git 
下载地址：https://git-scm.com/downloads

一路next安装即可

### 2.配置环境变量
C:\program Files\Git\cmd

具体看自己安装到哪里 最后落到git文件夹中的cmd文件夹即可

### 3.配置git用户信息

打开命令 输入以下命令设置
```
//设置username 和 email
$ git config --global user.name  "name"//自定义用户名
$ git config --global user.email "youxiang@qq.com"//用户邮箱

//其他相关命令
//修改
git config --global configname configvalue
//查询
git config --global configname
//查询全部
git config --list
```
### 4.创建GitHub账号

### 5.配置SSH key
#### 5.1 通过Bash工具创建ssh key
本地Git仓库和GitHub仓库之间的传输是通过SSH加密传输的，所以需要配置ssh key。

在用户主目录下，查询是否存在“.ssh”文件。

- 如果有，再看文件下有没有id_rsa和id_rsa.pub这两个文件，如果也有，可直接到下一步。
- 如果没有，在开始附录里找到Git Bash，输入命令，创建SSH Key

输入：$ ssh-keygen -t rsa -C "youxiang@qq.com" 

引号内是github注册使用的邮箱!!


再查看.ssh时，已经有“id_rsa”，“id_rsa.pub”文件。

SSH Key的秘钥对：id_rsa是私钥，不能泄露；id_rsa.pub是公钥，可以公开。

我们要使用的是其中的公钥id_rsa.pub


#### 5.2 github填写SSH Key
1.登上GitHub后点击头像

2.打开“Account settings”–“SSH Keys”页面

3.点击“Add SSH Key”

4.title自定义，key复制id_rsa.pub的全部内容到文本框中


#### 5.3 验证
①验证是否成功，在git bash里输入下面的命令


```
$ ssh -T git@github.com
```

②初次设置需要输入yes，出现第二个红框内容表示成功。
![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/df09da8a8cddd295be50bd58ba0f517d.png)

**注意如果开了加速器上GitHub这里要记得关掉**

### 6.接着到了这次要使用的开发工具 QT creator
可参考这篇文章：
https://blog.csdn.net/qq_49635014/article/details/132291529

**但现在GitHub的默认分支改名为main而不是master 所以文章中涉及的master的命令要改为main**

**如无法提交到GitHub的远程仓库可尝试关掉加速器:(**
