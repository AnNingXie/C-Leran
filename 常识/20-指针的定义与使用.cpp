#include <iostream>
using namespace std;

/*
指针的作用:
可以通过指针间接访问内存
指针就是一个地址
*/
int main(){

    int a = 10;
    // 定义一个指针 数据类型 * 指针变量名;
    int *p;
    //让指针记录变量a的地址
    p = &a;
    cout << "a的地址为:" << p << endl;
    // a的地址为:0x7ffeee251308

    // 如何使用指针
    // 可以通过解引用的方式来找到指针指向的内存
    // 指针前加一个 * 代表解引用,找到指针指向的内存中的数据
    // *p可以直接获取这块内存中的数据
    cout << *p << endl;
    // 修改这块内存中的数据
    *p = 100;

    cout << a << endl;
    cout << *p << endl;



    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


