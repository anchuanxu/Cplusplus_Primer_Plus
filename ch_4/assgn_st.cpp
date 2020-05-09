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
    //初始化
    inflatable bouquet
            {
        "sunflowers",
        0.20,
        12.49
            };
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    return 0;
}
