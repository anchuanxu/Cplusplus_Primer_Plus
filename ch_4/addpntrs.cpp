//
// Created by chuanxu on 2020/6/28.
//
// 知识点：C++将数组名解释为数组第一个元素的地址
#include <iostream>

int main()
{
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    //here are two ways to get the address of an array
    double  * pw = wages;
    //wages = &wages[0] = address of first element of array
    short * ps = &stacks[0];
    //with array element
    //在很多情况下，可以使用数组方括号表示法，也可以使用解除引用运算符（*）。他们都表示地址，区别是指针的值可以修改。
    //另一个区别是使用sizeof的时候，指针的结果是指向数据的数据类型字节，而数组名是整个数组数组的大小
    //数组名代表的是第一个数组元素所在地址，而引用数组名则代表着整个数组的内存块地址。
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer: " << endl;
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer: " << endl;
    cout << "ps = " << ps << ", *ps = " << *ps << endl;

    cout << "access two elements with array notation" << endl;
    cout << "*stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with array notation" << endl;
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;

    cout << sizeof(wages) << " = size of wages array" << endl;
    cout << sizeof(pw) << " = size of pw pointer" << endl;
    return 0;
}
