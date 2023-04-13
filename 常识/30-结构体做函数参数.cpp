#include <iostream>
using namespace std;

/*
结构体做函数参数:
将结构体作为参数向函数中传递
传递方式有两种:
值传递
地址传递
*/

// 自定义结构体 自定义数据类型
struct Student{
    string name;    // 姓名
    int age;        // 年龄
    int score;      // 分数
};

// 值传递
void printStu(struct Student stu){
    cout << stu.name << endl;
}

// 地址传递
void printStu2(struct Student *p){
    cout << p->age << endl;
}

int main(){ 
    struct Student stu = {"张三", 18, 98};
    printStu(stu);
    printStu2(&stu);
    
    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


