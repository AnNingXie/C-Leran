#include <iostream>
using namespace std;

/*
goto
可以无条件跳转语句
如果标记的名称存在,执行到goto语句时,会跳转到标记的位置
运行结果145
*/
int main(){
    
    // for循环
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    cout << "1" << endl;
    goto FLAG;
    cout << "2" << endl;
    cout << "3" << endl;
    FLAG:
    cout << "4" << endl;
    cout << "5" << endl;

    
    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}
