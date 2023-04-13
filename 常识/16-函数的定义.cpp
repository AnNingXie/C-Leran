#include <iostream>
using namespace std;

/*
函数的定义:
1.返回值类型
2.函数名
3.参数列表
4.函数体语句
5.return语句

函数的调用:
函数名称(参数)

如果函数不需要返回值,声明的时候可以写void
返回值不需要的时候,可以不写return

*/

// 两个整数进行交换
void swap(int num1, int num2){
    cout << num1 << endl;
    cout << num2 << endl;
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
    cout << num1 << endl;
    cout << num2 << endl;
}

// 函数的定义 两个整数相加求和函数
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main(){

    // 函数的调用
    int sum = add(10, 2);
    cout << sum << endl;

    // 两个数进行交换
    swap(10, 20);

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}
