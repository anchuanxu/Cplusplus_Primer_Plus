#include <iostream>
#include <cstring>

using namespace std;
char * getname(void);//函数原型
int main()
{
    char * name;//创建一个指针，但是没有分配内存

    name = getname();//分配内存空间
    cout << name << "at " << (int *) name << endl;
    delete [] name;//释放内存

    name = getname();
    cout << name << "at " << (int *) name << endl;
    delete [] name;
    return 0;
}

char * getname()
{
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn,temp);

    return pn;
}
