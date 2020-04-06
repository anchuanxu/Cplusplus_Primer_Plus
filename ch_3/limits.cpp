//
// Created by 安传旭 on 2020/4/6.
//
# include <iostream>
# include <climits>

int main ()
{
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof
    cout << " int is " << sizeof(int) << " bytes. " << endl;
    cout << " short is " << sizeof(n_short) << " bytes. " << endl;
    cout << " long is " << sizeof(n_long) << " bytes. " << endl;
    cout << " long long is " << sizeof(n_llong) << " bytes. " << endl;
    cout << endl;

    // sizeof对数据类型名称求值，必须加括号，对变量则括号可带可不带。

    cout << " Maximum values: " << endl;
    cout << " int : " << n_int << " bytes. " << endl;
    cout << " short : " << n_short << " bytes. " << endl;
    cout << " long : " << n_long << " bytes. " << endl;
    cout << " long long : " << n_llong << " bytes. " << endl << endl;

    cout << " Minimum int value = " << INT_MIN << endl;
    cout << " Bits per byte = " << CHAR_BIT << endl;
    return  0;
}
