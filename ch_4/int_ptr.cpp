//
// Created by chuanxu on 2020/5/9.
//
#include <iostream>
int main()
{
    using namespace std;
    int heggens = 5;
    int * pt = &heggens;

    cout << "Values of heggens = " << heggens
         << "; Address of heggens = " << &heggens << endl;
    cout << "Values of *pt = " << *pt
         << "; Address of pt = " << pt << endl;
    return 0;
}
