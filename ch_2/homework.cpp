// homework.cpp -- ch2 Q1 Q2
// author : anchuanxu
// date : 2020/3/28

#include <iostream>
long convert(long);

using namespace std;

int main()
{
    cout << "Q1 : A1 " << endl;
    cout << "I am iron man , oh i just kiding. I am chuanxu an, I live in Beijing!" << endl;
    // end Q1

    cout << "Q2 : A2 " << endl;
    long dis;
    cout << "Please enter a distance :  " << endl;
    cin >> dis;
    cout <<  dis << " long = " << convert(dis) << " ma" << endl;
    //endl Q2
    return 0;
}
long convert(long distance)
{
    return 220 * distance;
}