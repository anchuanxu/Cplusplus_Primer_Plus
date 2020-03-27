// convert.cpp -- converts stone yo pounds
// author : anchuanxu
// date : 2020/3/27

#include <iostream>
int stonetolb(int);

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounts = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounts << " pounts " << endl;
    return 0;
    
}
int stonetolb(int sts)
{
    return 14 * sts;
}