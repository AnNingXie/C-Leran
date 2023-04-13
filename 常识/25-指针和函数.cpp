#include <iostream>
using namespace std;

/*
指针和函数
作用:
利用指针作函数参数,可以修改实参的值
*/

// 地址传递
void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){ 
    int a = 10;
    int b = 20;
    // 地址传递
    swap(&a, &b);

    cout << a << endl;
    cout << b << endl;
    
    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


