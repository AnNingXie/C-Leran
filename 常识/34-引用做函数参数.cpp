#include <iostream>
using namespace std;

/*
引用做函数参数:
作用:函数传参时,可以利用引用的技术让形参修饰实参
优点:可以简化指针修改实参
*/

// 地址传递
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 引用传递
void test(int &a, int &c){
     int tmp = a;
     a = c;
     c = tmp;
} 

int main(){ 

    // 引用的基本使用
    int a = 10;
    int c = 20;
    int &b = a; // 正确

    // 地址传递  形参会修饰实参的
    // swap(&a, &c);

    // 引用传递 形参也会修饰实参
    test(a, c);  
    cout << a << endl;
    cout << c << endl;

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


