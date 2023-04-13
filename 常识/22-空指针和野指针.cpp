#include <iostream>
using namespace std;

/*
空指针:指针变量指向内存中编号为0的空间
用途:初始化指针变量 
注意:空指针指向的内存是不可以访问的

野指针:
指针变量指向非法的内存空间

空指针和野指针都不是我们申请的空间,因此不要访问






*/
int main(){

    // 初始化指针
    int *p = NULL;

    // 空指针是不可以访问的,*p = 100;程序直接会崩,报错
    // *p = 100;



    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


