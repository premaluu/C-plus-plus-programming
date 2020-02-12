/*
    Created by premal upadhyay
*/
//global variable
#include <iostream>

using namespace std;

int a=10; //global variable declaration and intialization

int main()
{
    int a=20;
    cout << "\nlocal variable is"<<a;
    cout<<"\nglobal variable is"<<::a;  //"::" this is sign of scope resolution operator is used access global variable
    return 0;
}
