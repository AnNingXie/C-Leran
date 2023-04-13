#include <iostream>
using namespace std;

/*
引用的基本使用:
作用:给变量起别名
数据类型 &别名 = 原名

注意事项:
引用必须要初始化
引用一旦初始化就不可以更改
*/
int main(){ 

    // 引用的基本使用
    int a = 10;
    int &b = a; // 正确

    // int &c;  错误

    cout << a << endl;
    cout << b << endl;

    b = 100;
    cout << a << endl;
    cout << b << endl;

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


