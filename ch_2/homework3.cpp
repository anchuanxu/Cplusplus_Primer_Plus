// homework3.cpp -- ch2 Q7
// author : anchuanxu
// date : 2020/3/28

#include <iostream>

using namespace std;

void printClock(int ,int);

int main()
{
    int min,hou;
    cout << "Enter the number of hours : ";
    cin >> hou;
    cout << "Enter the number of minutes : ";
    cin >> min;
    printClock(min,hou);
    return 0;
}
void printClock(int minutes, int hours)
{
    cout << "Time: " << hours << " : " << minutes << endl;
}