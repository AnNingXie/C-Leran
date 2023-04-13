#include <iostream>
using namespace std;

/*
引用的本质:
在C++内部实现是一个指针常量
*/

int & test(){
    static int a = 10;
    return a;
}

int main(){ 

    int a = 10;
    int &b = a;
    // 设置引用 int &b = a;这句话的本质其实是将这句话自动转换为:
    // int * const b

    int &a = test();
    cout << a << endl;
    cout << a << endl;
    
    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


