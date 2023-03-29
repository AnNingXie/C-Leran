
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

字符型
字符型变量用于显示单个字符
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

    cout << "float占用的内存空间为:" << sizeof(float) << endl;
    cout << "double占用的内存空间为:" << sizeof(double) << endl;
    
    char ch = 'a'

    
    // 输出hello world c++
    cout << "hello world c++" << endl;
    
    system("pause");
    return 0;
}