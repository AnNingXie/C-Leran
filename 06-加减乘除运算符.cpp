#include <iostream>
using namespace std;

/*
算数运算符
+
-
*
/
%取模(取余)
++
前置递增,先让变量加1,然后进行表达式运算
后置递增,先进行表达式运算,再让变量加1
--
赋值运算符
比较运算符
==
!=
<
>
<=
>=

逻辑运算符
!   非
&&  与
||  或

*/
int main(){

    int a = 10;
    ++a;
    cout << a << endl;

    int b = 10;
    b++;
    cout << b << endl;

    int b1 = 10;
    int c = b1++ * 10;
    cout << b1 << endl;
    cout << c << endl;
    // b1的值是11, c的值是100
    
    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}