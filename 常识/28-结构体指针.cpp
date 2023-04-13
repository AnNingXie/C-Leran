#include <iostream>
using namespace std;

/*
结构体指针:
通过指针访问结构体中的成员
利用操作符->可以通过结构体指针访问结构体属性
*/

// 自定义结构体 自定义数据类型
struct Student{
    string name;    // 姓名
    int age;        // 年龄
    int score;      // 分数
};

int main(){ 
    // 创建学生的结构体变量
    struct Student stu= {"tom", 18, 100};
    // 通过指针指向结构体变量
    struct Student *p = &stu;
    // 通过指针访问结构体变量中的数据
    cout << p->name << endl;

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


