/*
    Created by premal upadhyay
*/
//refrence variable
/*if we change anyone from refrence and variable then both varaibles are change*/
#include <iostream>

using namespace std;

int main()
{
    int a;
    int &ref=a;

    cout<<"\nenter the a\n";
    cin>>a;
    cout<<"\nrefrence \n"<<ref;

    a=a+5;
    cout<<"\nrefrence is equal to\n"<<ref;
    cout<<"\noriginal variable \n"<<a;
    ref=a+10;
    cout<<"\nrefrence varaible\n"<<ref;
    cout<<"\noriginal variable\n"<<a;

    return 0;
}
