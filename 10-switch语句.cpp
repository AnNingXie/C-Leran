#include <iostream>
using namespace std;

/*
switch语句
执行多条件分支语句
*/
int main(){
    
    int score = 2;
    switch (score)
    {
    case 9:
        cout << "9" << endl;
        break;
    case 8:
        cout << "8" << endl;
        break;
    default:
        cout << "1" << endl;
        break;
    }
        
    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}
