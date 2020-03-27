// homework2.cpp -- ch2 Q3
// author : anchuanxu
// date : 2020/3/28

#include <iostream>

void func_1();
void func_2();
int yearsOldConvert(int);
double temperatureConvert(double);
double LightYearConvert(double);

int main()
{
    std::cout << "Q3 : A3" << std::endl;
    func_1();
    func_1();
    func_2();
    func_2();
    //endl Q3

    std::cout << "Q4 : A4" << std::endl;
    std::cout << "Please enter your ages " << std::endl;
    int age;
    std::cin >> age;
    std::cout << "Your age total " << yearsOldConvert(age) << " mouths ." << std::endl;
    //endl Q4

    using std::cin;
    using std::cout;
    using std::endl;
    cout << "Q5 : A5" << endl;
    cout << "Please enter a Celsius value :" << endl;
    double Cel;
    cin >> Cel;
    cout << Cel << " degrees Celsius is " << temperatureConvert(Cel) << " degrees Fahrenheit ." << endl;
    //endl Q5

    cout << "Q6 : A6" << endl;
    cout << "Enter the number of the light years: " ;
    double lightyears;
    cin >> lightyears;
    cout << lightyears << " light years = " << LightYearConvert(lightyears) << " astronomical units." << endl;
    //endl Q6

    return 0;
}
void func_1()
{
    std::cout << " Three blind mice " << std::endl;
}
void func_2()
{
    std::cout << " See how they run " << std::endl;
}
int yearsOldConvert(int age)
{
    return 12 * age;
}
double temperatureConvert(double c)
{
    double f;
    f = 1.8 * c + 32.0;
    return f;
}
double LightYearConvert(double ly)
{
    double astronomical_units;
    astronomical_units = ly * 63240;
    return astronomical_units;
}