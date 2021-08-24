#include <iostream>

void simple(); //函数原型

int main()
{
    using namespace std;
    cout << " main() will call the simple() function: \n";
    simple();
    cout << " main() is finished with the simple() function.\n";
    return 0;
}

void simple()
{
    std::cout << "I'm but a simple function.\n";
}