// sqrt.cpp -- using the sqrt() function
// author : anchuanxu
// date : 2020/3/27

#include<iostream>
#include<cmath>

int main()
{
    using namespace std;

    double area;
    cout << "Enter the floor area, in squsre feet , of your home ." << endl;
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "side = " << side << endl;
    return 0;
}