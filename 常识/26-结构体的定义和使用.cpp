#include <iostream>
using namespace std;

/*
结构体
*/

// 自定义结构体 自定义数据类型
struct Student{
    string name;    // 姓名
    int age;        // 年龄
    int score;      // 分数
};


int main(){ 
   
    // 通过学生类型创建具体学生  
    // 第一种方式:  创建的时候struct可以省略,直接 Student s1
    struct Student s1;
    s1.name = "tom";
    s1.age = 18;
    s1.score = 98;
    
    cout << s1.name << endl;

    // 第二种方式:
    struct Student s2 = {
        "miha",
        19,
        80
    };
    cout << s2.name << endl;

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


