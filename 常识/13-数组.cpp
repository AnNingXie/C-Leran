#include <iostream>
using namespace std;


int main(){
    // 数组定义三种方式:
    // 1.数据类型 数组名[数组长度];
    int score1[4];
    score1[0] = 10;
    score1[1] = 20;
    score1[2] = 30;
    score1[3] = 40;

    // 2.数据类型 数组名[数组长度] = {值1, 值2, 值3...};
    int score2[4] = {10, 20, 30, 40};
    for (int i = 0; i < 4; i++)
    {
        cout << score2[i] << endl;
    }
    
    // 3.数据类型 数组名[] = {值1, 值2, 值3...};
    int score3[] = {10, 20, 30, 40};

    cout << score2[0] << endl;

    // 数组所占用的内存大小 sizeof(score3)
    cout << sizeof(score3) << endl;

    // 查看某个元素的地址
    cout << &score2[0] << endl;
    
    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}
