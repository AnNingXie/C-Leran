#include <iostream>
using namespace std;
/*
C++中利用new操作符在堆区开辟数据
堆区开辟的数据,由程序员手动开辟,手动释放,释放利用操作符delete
*/

// 在堆区开辟数据 这个函数是正确的 new int(10);返回的是一个该数据类型的指针
int * funcb(){
    int *b = new int(10);
    return b;
}

int main(){ 
    funcb();

    // 在堆区利用new开辟数组
    int *array = new int[5];
    for (int i = 0; i < 5; i++)
    {
        array[i] = i;
    }

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


