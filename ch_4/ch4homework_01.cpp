#include <iostream>
#include <cstring>
#include <vector>
#include <array>

struct CandyBar
{
    std::string name;
    double quality;
    double diameter;
};

int main()
{
    using namespace std;
    //Q5
//    CandyBar snack = {"Mocha Munch",2.3,350};
//    cout << "snack name : " << snack.name << "snack quality : " <<
//            snack.quality << "snack.kaluli : " << snack.kaluli << endl;

    //Q6
//    CandyBar snack[3];
//    snack[0] =  {"MJ",23,33000};
//    snack[1] =  {"KB",24,34000};
//    snack[2] =  {"LBJ",23,35000};

//    for(int i = 0; i < 3; i++)
//    {
//        cout << " snack name : " << snack[i].name << " snack quality : " <<
//                snack[i].quality << " snack.kaluli : " << snack[i].kaluli << endl;
//    }

    //Q7
//    CandyBar snack;
//    cout << "Please enter country name: " << endl;
//    cin >> snack.name;
//    cout << "Please enter pisa's diameter: " << endl;
//    cin >> snack.diameter;
//    cout << "Please enter pisa's quality: " << endl;
//    cin >> snack.quality;
//    cout << "You enter infomation is: " << snack.name << snack.diameter << snack.quality << endl;

    //Q8
//    CandyBar * ps = new CandyBar;
//    cout << "Please enter pisa's diameter: " << endl;
//    cin >> ps->diameter;
//    cout << "Please enter country name: " << endl;
//    cin >> ps->name;
//    cout << "Please enter pisa's quality: " << endl;
//    cin >> ps->quality;
//    cout << "You enter infomation is: " << ps->name << " " << ps->diameter << " " << ps->quality << endl;

    //Q9
//    vector <CandyBar> snack(3);
//    snack[0] =  {"MJ",23,33000};
//    snack[1] =  {"KB",24,34000};
//    snack[2] =  {"LBJ",23,35000};

//    for(int i = 0; i < 3; i++)
//    {
//        cout << " snack name : " << snack[i].name << " snack quality : " <<
//                snack[i].quality << " snack.kaluli : " << snack[i].diameter << endl;
//    }

    //Q10
//    array <double,3> grade;
//    for (int i = 0; i < 3; i++) {
//        cin >> grade[i];
//    }
//    for (int i = 0; i < 3; i++) {
//        cout << "NO." << i << " = " << grade[i] << endl;
//    }

    return 0;
}
