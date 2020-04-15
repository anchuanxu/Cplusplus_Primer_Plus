//
// Created by chuanxu on 2020/4/10.
//

#include <iostream>

int main()
{
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;
    cout << " a = " << a << endl;
    cout << " b - a = " << b - a << endl;

    //float只能表示数字的前6位，对第23位不会有影响。
    return 0;
}