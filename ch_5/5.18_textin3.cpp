#include <iostream>

int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit: \n";
    //cin >> ch;
    cin.get(ch);

    //while(ch != '#')
    while(cin.fail() == false) //test for eof
    {
        cout << ch;
        ++count;
        //cin >> ch;
        cin.get(ch);
    }
    cout << endl <<count << " characters read\n";
    return 0;
}