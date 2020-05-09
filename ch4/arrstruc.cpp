//
// Created by chuanxu on 2020/5/9.
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
    inflatable guests[2] = {
            {"kobe",0.5,21.99},
            {"James",2000,565.99}
    };

    cout << "The guests " << guests[0].name << " and " << guests[1].name
         << "\n have a combined volume of " << guests[0].volume + guests[1].volume
         << " cubic feet.\n ";
    return 0;
}