#include <iostream>

struct antarctica_years_end
{
    int years;
};

int main()
{
    using namespace std;
    antarctica_years_end s01, s02, s03;
    s01.years = 1998;
    antarctica_years_end * pa = &s02;
    pa->years = 1999;
    antarctica_years_end trio[3];//结构数组，就是数组中有三组结构
    trio[0].years = 2003;
    cout << "trio->years = " << trio->years << endl;
    const antarctica_years_end * arp[3] = {&s01,&s02,&s03};//指针数组，就是数组中有三个指针
    cout << "arp[0]->years = " << arp[0]->years << endl;
    cout << "arp[1]->years = " << arp[1]->years << endl;
    cout << "arp[2]->years = " << arp[2]->years << endl;
    const antarctica_years_end ** ppa = arp;//指向指针数组的指针，初始化为数组名
    auto ppb = arp;//C++ 11 automatic type deduction
    //上行代码等价于下一行代码
    //const antarctica_years_end ** ppb = arp;
    cout << "(*ppa)->years = " << (*ppa)->years << endl;
    cout << "(*(ppa + 1))->years = " << (*(ppa + 1))->years << endl;
    cout << "(*(ppa + 1))->years = " << (*(ppb + 1))->years << endl;
    return 0;
}
