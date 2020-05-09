//
// Created by chuanxu on 2020/5/9.
//
#include <iostream>
int main()
{
    using namespace std;
    double * p3 = new double [3];
    p3[0] = 0.0;
    p3[1] = 0.1;
    p3[2] = 0.2;
    cout << "p3[0] is " << p3[0] << ".\n";
    cout << "p3[1] is " << p3[1] << ".\n";
    cout << "p3[2] is " << p3[2] << ".\n";

    //和数组的根本差别，数组名不能计算，指针却可以加减
    p3 = p3 + 1;

    cout << "Now p3[0] is " << p3[0] << endl;
    cout << "Now p3[1] is " << p3[1] << endl;
    cout << "Now p3[2] is " << p3[2] << endl;

    p3 = p3 - 1;

    cout << "final p3[0] is " << p3[0] << endl;
    cout << "final p3[1] is " << p3[1] << endl;
    cout << "final p3[2] is " << p3[2] << endl;

    delete [] p3;
    return 0;

}
