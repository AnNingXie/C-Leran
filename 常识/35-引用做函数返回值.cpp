#include <iostream>
using namespace std;

/*
引用做函数返回值:
作用:引用是可以作为函数的返回值存在的
注意:不要返回局部变量引用
用法:函数调用作为左值
*/

int & test(){
    static int a = 10;
    return a;
}

int main(){ 

    int &a = test();
    cout << a << endl;
    cout << a << endl;
    
    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


