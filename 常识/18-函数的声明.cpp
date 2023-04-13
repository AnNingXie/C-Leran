#include <iostream>
using namespace std;

/*
函数的声明
当一个函数在main()函数的后面的时候,不能直接调用
需要在main()函数的前面声明这个函数
int add(int num1, int num2);
*/

// 声明这个函数
int add(int num1, int num2);

int main(){

    int sum = add(10, 20);
    cout << sum << endl;

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}

// 两个数相加的和
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}
