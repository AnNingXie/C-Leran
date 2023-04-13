#include <iostream>
using namespace std;

/*
while循环语句
只要满足循环条件,执行循环语句
*/
int main(){
    int score = 600;
    while (score > 500){
        cout << "一直走" << endl;
    }

    do{
        cout << "一直走" << endl;
    } while (score > 500);
    
    
    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}
