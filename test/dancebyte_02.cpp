#include <iostream>
#include <vector>
using namespace std;

int maxEarnings(vector<int> array, int size)
{
        if(size<=0)
                return 0;
        else if(size ==1)
                return array[0];

        int sume = 0; //不包含当前元素最大和
        int sumi = array[0]; //包含当前元素最大和
        int sume_new;
        for(int i = size; i>0; --i)
        {
                sume_new = (sume>sumi)?sume:sumi;
                sumi = sume + array[i];
                sume = sume_new;
        }
        return (sumi>sume)?sumi:sume;
}

int main()
{
    vector <int>  vi;
    int c ;
//     while(getchar() != '\n')
//     {
//         cin >> c; //此处bug
//         cout << c << endl;
//         vi.push_back(c);
//     }
        while(c != '\n')
        {
                cin >> c;
                vi.push_back(c);
                cout << " c01 = "<< c << endl;
                c = getchar();
                cout <<  " c02 = "<< c << endl;
                
        }
    for(int i = 0; i < vi.size(); i++) 
    {
        cout <<vi[i]<<" " ;
    }
    cout<<maxEarnings(vi, vi.size())<<endl;
}