//
// Created by chuanxu on 2020/5/9.
//
#include <iostream>
int main()
{
    using namespace std;
    int update = 6;
    int * p_update;
    p_update = &update;

    cout << "Value: update = " << update;
    cout << ", *p_update = " << *p_update << endl;

    cout << "Address: &update = " << &update;
    cout << ", p_update = " << p_update << endl;

    *p_update = *p_update + 1;
    cout << "Now update = " << update << endl;
    return 0;
}
