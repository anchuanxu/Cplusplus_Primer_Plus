#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int integerBreak(int n) {
        vector<int>  mul(n+1,-1);
        mul[1]=1;
        mul[2]=1;
        for(int i=3;i<=n;i++)
        { //求mul[i]
            int k=0;
            for(int j=1; j<=i/2;j++) {
                k=max(j,mul[j])*max((i-j),mul[i-j]);
                mul[i]=max(mul[i],k);
            }
        }
        return mul[n];
    }
};

int main()
{
    int N;
    cin>>N;
    cout << Solution().integerBreak(N)<<endl;
    return 0;
}