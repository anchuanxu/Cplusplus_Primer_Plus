#include <iostream>

using namespace std;
int file_array(double ar[], int limit)
{
    double temp;
    int i;
    for (i = 0 ; i < limit; i++)
    {
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while ((cin.get() != '\n'))
            {
                continue;
            }
            break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}
int main()
{
    double arr[5];
    int limit = 3;
    cout << file_array(arr, limit) << endl;
    return 0;
}