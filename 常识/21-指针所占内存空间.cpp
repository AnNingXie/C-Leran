#include <iostream>
using namespace std;

int main(){

    int a = 10;
    // 定义一个指针 数据类型 * 指针变量名;
    int *p;
    //让指针记录变量a的地址
    p = &a;
    cout << "a的地址为:" << p << endl;
    // a的地址为:0x7ffeee251308

    cout << sizeof(p) << endl;
    // 指针占多少个字节:32位占4个字节, 64位占8个字节

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


