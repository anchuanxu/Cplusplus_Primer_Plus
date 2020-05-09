//
// Created by chuanxu on 2020/4/16.
//

#include <iostream>
int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    // here have a bug, use next line sloved
    cin.get(); // or (cin >> year).get();
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address,80);
    cout << "Year built : " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}