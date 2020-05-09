//
// Created by chuanxu on 2020/5/7.
//
#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    //初始化结构
    inflatable guest =
            {
            "Kobe Bryant",
            1.98,
            3800.00
            };

    inflatable pal =
            {
            "Lebron James",
            2.03,
            3400
            };

    cout << "Expand your guest list wiht " << guest.name;
    cout << " and " << pal.name << endl;
    cout << "You can have both for $ ";
    cout << guest.price + pal.price << " w ." << endl;
    return 0;
}
