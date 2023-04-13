/*
内存四区:

代码区:存放函数体的二进制代码,由操作系统进行管理的
存放CPU执行的机器指令
代码区是共享的
代码区是只读的

全局区:存放全局变量和静态变量以及常量
该区域的数据在程序结束后由操作系统释放

代码区和全局区都是程序代码运行前的区域

栈区:由编译器自动分配释放,存放函数的参数值,局部变量等
注意事项:不要返回局部变量的地址 局部变量的地址会被编译器自动释放

堆区:由程序员分配释放,若程序员不释放,程序结束时由系统回收
在C++中主要利用new在堆区开辟内存

内存四区意义:
不同区域存放的数据,赋予不同的生命周期,给我们更大的灵活编程


*/

#include <iostream>
using namespace std;

// 不要返回局部变量的地址 这个函数是错误的
int * func(){
    int a = 10;
    return &a;
}

// 在堆区开辟数据 这个函数是正确的 new int(10);返回一个地址
int * funcb(){
    int *p = new int(10);
    return p;
}

int main(){ 
    // 静态变量
    static int a = 10;

    int *p = func();
    cout << *p << endl; // 第一次打印正确是因为编译器做了保留
    cout << *p << endl; // 第二次这个数据不再保留
    cout << *p << endl;
    // 因此 不要返回局部变量的地址 局部变量的地址会被编译器自动释放

    // 在堆区开辟数据
    int *b = funcb();
    cout << *b << endl;
    cout << *b << endl;
    cout << *b << endl;

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


