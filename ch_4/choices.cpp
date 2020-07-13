#include <iostream>
#include <vector>
#include <array>

int main()
{
    using namespace std;

    //普通数组声明和初始化,C和C++最初的做法
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
    //C++98 STL
    vector<double> a2(4);
    //没有简单的方式去初始化再C98中，只有如下方式
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
    //C++11有了array对象，可以用于创建普通数组
    array<double,4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double,4> a4;
    a4 = a3;//相同尺寸这么做是合法的，尺寸就是第二个参数4
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    //搞事情
    a1[-2] = 20.2;//等价于*(a1-2) = 20.2;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    return 0;
}
