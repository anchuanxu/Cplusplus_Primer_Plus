//
// Created by chuanxu on 2020/4/15.
//
#include <iostream>

int main()
{
    using namespace std;

    //Q1
//    const int foot_to_inch = 12;
//    int high;
//    cout << " Enter your high = __\b\b" ;
//    cin >> high;
//    cout << " Your high = " << high / 12 << " foot and " << high % 12 << " inch . " << endl;

    //Q2
//    const int foot_to_inch = 12;
//    const double inch_to_mi = 0.0254;
//    const double kg_to_pounds = 2.2;
//    double  bmi;
//    int foot, inch, pounds;
//    cout << " Enter your high = ";
//    cin >> foot >> inch;
//    cout << " Your high is " << foot << " foot and " << inch << " inch , convert inch is " <<
//    foot * 12 + inch << " inch . then convert mi is " << double( foot * 12 + inch ) * inch_to_mi << " mi ." << endl;
//    double mi = double( foot * 12 + inch ) * inch_to_mi;
//    cout << " Enter your wight = ";
//    cin >> pounds;
//    cout << " Your wight is " << pounds << " pounds , convert kg is " << pounds / kg_to_pounds << " kg . " << endl;
//    double kg = pounds / kg_to_pounds;
//    bmi = kg / (mi * mi);
//    cout << " Your body BMI is = " << bmi << endl;

    //Q3
//    const int DegreesToMinutes = 60;
//    const int MinutesToSeconds = 60;
//    int degrees, minutes, seconds;
//
//    cout << " Enter a latitude in degrees, minutes, and seconds: " << endl;
//    cout << " First, enter the degrees : ";
//    cin >> degrees;
//    cout << " Next, enter the minutes of arc : ";
//    cin >> minutes;
//    cout << " Finally, enter the seconds of arc : ";
//    cin >> seconds;
//    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " <<
//    (float(seconds) / 60) / 60 + float(minutes) / 60 + float(degrees) << " degrees ." << endl;

    //Q4
//    const int DayToHours = 24;
//    const int HoursToMinutes = 60;
//    const int MinutesToSeconds = 60;
//    long seconds, minutes , hours, days, second;
//    cout << " Enter the number of seconds : ";
//    cin >> seconds;
//    days = seconds / MinutesToSeconds / HoursToMinutes / DayToHours;
//    hours = seconds / MinutesToSeconds / HoursToMinutes % DayToHours;
//    minutes = (seconds / MinutesToSeconds - days * DayToHours * HoursToMinutes) % HoursToMinutes;
//    //minutes = seconds / MinutesToSeconds - days * DayToHours * HoursToMinutes - hours * HoursToMinutes;
//    second = seconds - days * DayToHours * HoursToMinutes * MinutesToSeconds - hours * HoursToMinutes * MinutesToSeconds - minutes * MinutesToSeconds;
//    cout << seconds << " seconds = " << days << " days, "
//    << hours << " hours, " << minutes
//    << " minutes, " << second << " seconds . " << endl;

    //Q5
//    long long worldPopulation, chinese;
//    cout << " Enter the world's population : ";
//    cin >> worldPopulation;
//    cout << " Enter the china population : ";
//    cin >> chinese;
//
//    double p;
//    p = double(chinese) / double(worldPopulation) * 100 ;
//    cout << " The population of the CHINA is " << p << "% of the world population . " << endl;

    //Q6
    //Q7
    //省略

    return 0;
}