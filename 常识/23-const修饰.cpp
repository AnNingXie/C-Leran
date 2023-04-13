#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int b = 20;
    int c = 30;

    // 1.常量指针 const修饰的是指针,指针指向可以改,指针指向的值不可改
    const int *p1 = &a;
    p1 = &b;    // 正确
    // *p1 = 100;  错误
   
    // 2.指针常量 const修饰的是常量,指针指向不可以改,指针指向的值可以改
    int * const p2 = &a;
    // p2 = &b;  错误
    *p2 = 100;  // 正确

    // 3.const既修饰指针,又修饰常量  指针指向和指针指向的值都不可以改
    const int * const p3 = &a;
    // p3 = &b;     错误
    // *p3 = &b;    错误


    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


