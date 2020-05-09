//
// Created by chuanxu on 2020/5/9.
//
#include <iostream>
int main()
{
    using namespace std;
    int nights = 1001;
    int * pt = new int;
    *pt = 1001;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "Value = " << *pt << ": location " << pt << endl;

    double * pd = new double;
    *pd = 100000001.0;

    cout << "double";
    cout << "Value = " << *pd << ": location " << pd << endl;
    cout << "location of pointer pd : " << &pd <<endl;
    cout << "size of pt = " << sizeof(pt);
    cout << "size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << "size of *pd = " << sizeof(*pd) << endl;

    //为什么在64位系统中指针的大小是8，而32位的却是4？ 
    //64位系统，这个位数指的是CPU 里面的通用寄存器的数据宽度为64位，也就是说一个地址占二进制位数是64，所以：
    //sizeof(double *)==sizeof(int *)==sizeof(char *)==64/8==8

    delete pt,pd;

    return 0;
}
