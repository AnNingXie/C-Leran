#include <iostream>
using namespace std;

/*
结构体嵌套结构体:
结构体中的成员可以是另一个结构体
例如:每个老师辅导一个学生,一个老师的结构体中,记录一个学生的结构体
*/

// 自定义结构体 自定义数据类型
struct Student{
    string name;    // 姓名
    int age;        // 年龄
    int score;      // 分数
};

// 老师的结构体嵌套学生的结构体
struct Teacher{
    int id;     // 职工编号
    string name;    // 职工名字
    int age;    // 职工年龄
    struct Student stu; // 学生结构体
};


int main(){ 
    struct Teacher t = {1980234, "老王", 48, {"tom", 18, 100}};
    cout << t.stu.name << endl;
    
    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


