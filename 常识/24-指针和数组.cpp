#include <iostream>
using namespace std;

/*
指针和数组 
作用:利用指针访问数组中的元素
解引用之后就可以获取数组的元素

*/
int main(){
    // 指针和数组
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;   // 数组就是这个数组的首地址

    cout << "利用指针访问的第一个元素:" << *p << endl;
    cout << arr[0] << endl;

    p++;    // 让指针向右偏移4个字节 就可以找到第二个元素
    cout << "利用指针访问的第二个元素:" << *p << endl;

    // 利用指针遍历数组
    

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


