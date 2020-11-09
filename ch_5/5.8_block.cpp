#include <iostream>
 
int main() 
{
    using namespace std;
    cout << "The Amazing Accounto will sum and average ";
    cout << "five number for you . \n";
    cout << "please enter five values: \n";
    double number;
    double sum = 0.0;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number; 
    }
    cout << "Five exquisite choices indeed";
    cout << "They sum to " << sum << endl;
    cout << "average to " << sum / 5 << endl;
    return 0;
}