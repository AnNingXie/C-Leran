#include <iostream>
using namespace std;

/*
c++定义常量有两种方法
1.宏常量
#define years 365
2. const修饰的变量
const int aa = 10;
*/

// 常量
#define years 365
#define Week 7
const int month = 12;
int main(){
    
    cout << "一周有" << month << "天" << endl;

    // 变量的定义
    const int a = 10;
    cout << "a=" << a << endl;

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}

// 在给变量或者常量起名的时候不要使用c++中的关键字,否则会产生歧义
// 起名的时候见名知意

