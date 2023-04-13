#include <iostream>
using namespace std;

// 函数常见样式

// 1.无参无返
void test1(){
    cout << "无参无返" << endl;
}

// 2.有参无返
void test2(int num){
    cout << "有参无返" << endl;
}

// 3.无参有返
int test3(){
    cout << "无参有返" << endl;
    int num = 100;
    return num;
}

// 4.有参有返
int test4(int num){
    cout << "有参有返" << endl;
    return num;
}

int main(){

    test1();

    test2(100);

    int num = test3();
    cout << num << endl;

    int num4 = test4(1000);
    cout << num4 << endl;

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}
