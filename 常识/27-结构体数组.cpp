#include <iostream>
using namespace std;

/*
结构体数组:
将自定义的结构体放入到数组中方便维护
*/

// 自定义结构体 自定义数据类型
struct Student{
    string name;    // 姓名
    int age;        // 年龄
    int score;      // 分数
};

int main(){ 
    // 创建结构体数组
    struct Student stuArray[3]= {
        {"tom", 18, 100},
        {"jack", 20, 90},
        {"张三", 30, 99}
    };

    // 修改结构体中的值
    stuArray[1].name = "hans";
    

    // 输出hello world c++
    cout << "hello world c++" << endl;
    system("pause");
    return 0;
}


