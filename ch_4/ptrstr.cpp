//
// Created by chuanxu on 2020/6/28.
//
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;

    cout << animal << " and ";
    cout << bird << endl;

    cout << "Enter a kind of animal: ";
    cin >> animal; //ok if input < 20 chars
    ps = animal;//只是复制了地址给ps
    cout << ps << endl;
    cout << "Before using strcpy(): " << endl;
    //如果指针类型为char * ，则cout将显示指向的字符串,为了显示地址，则需要类型转换如下：
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];  //get new storage ，+1是因为需要存储空字符，
    //使用strlen()来确定所需空间，随后使用new来获取所需要的内存空间
    strcpy(ps,animal);//将animal地址中存储的字符串赋值到ps(新申请的内存)中
    //strcpy()函数接受两个参数，第一个是目标地址，第二个是要复制的字符串地址，应该确定分配了足够的目标空间。
    cout << "After using strcpy(): " << endl;
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete  [] ps;
    return 0;
}
