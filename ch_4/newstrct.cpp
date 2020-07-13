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
    inflatable * ps = new inflatable; //给自定义的结构分配内存
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);//方法一，成员访问
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;//方法二，成员访问
    cout << "Enter price: ￥";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << endl;
    cout << "Price: " << ps->price << endl;
    delete ps;
    return 0;
}
