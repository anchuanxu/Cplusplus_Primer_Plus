#include <iostream>
int main()
{
    using std::cout;
    int a = 20;
    int b = 20;
    cout << "a = " << a << " : b = " << b << std::endl;
    cout << "a ++ = " << a++ << " : ++b = " << ++b << std::endl;
    cout << "a = " << a << " :b = " << b << std::endl;
    return 0;
}