#include <iostream>
using namespace std;

int main(){
    // 二维数组定义方式:
    // 1.数据类型 数组名[行数][列数];
    int num1[2][3];
    num1[0][0] = 10;
    cout << num1[0][0] << endl;
    
    // 2.数据类型 数组名[行数][列数] = {{4, 5, 6}, {1, 2, 3}};
    int num2[2][3] = {{4, 5, 6}, {1, 2, 3}};
    cout << num2[0][2] << endl;

    // 3.数据类型 数组名[行数][列数] = {1, 2, 3, 4};
    int num3[2][3] = {1, 2, 3, 4, 5, 6};
    cout << num3[0][2] << endl;

    // 4.数据类型 数组名[][列数] = {1, 2, 3, 4};
    int num4[][3] = {1, 2, 3, 4, 5, 6};
    cout << num4[0][2] << endl;
    
    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}
