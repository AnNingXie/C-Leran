#include <iostream>
using namespace std;

int main(){
    
    int score = 480;
    // 多行格式的if语句
    if (score > 600){
        cout << "一本" << endl;
    }else if(score > 500){
        cout << "二本" << endl;
    }else{
        cout << "三本" << endl;
    }
        
    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}
