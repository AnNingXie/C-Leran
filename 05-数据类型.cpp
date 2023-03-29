
#include <iostream>
using namespace std;
/*
数据类型: 所占内存空间不同
整型:
short 短整型
int 整型
long 长整型
long long 长长整形

sizeof() 利用这个关键字可以统计数据类型所占用内存大小

实型(浮点型)
用于表示小数
单精度 float
双精度 double

*/
int main(){
    // 整型
    short a = 10;
    int b = 10;
    long c = 10;
    long long d = 10;

    sizeof(a);
    cout << "int占用内存大小:" << sizeof(int) << endl;
    cout << "short占用内存大小:" << sizeof(short) << endl;

    // 单精度
    float f1 = 3.14f;
    // 双精度
    double d1 = 3.14;
    cout << f1 << endl;
    cout << d1 << endl;

 
    // 输出hello world c++
    cout << "hello world c++" << endl;
    
    system("pause");
    return 0;
}