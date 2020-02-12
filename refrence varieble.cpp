/*
    Created by premal upadhyay
*/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int x=10;
    int &a=x;

    cout<<"\nx is "<<x;
    cout<<"\nreff is "<<a;

    x=x+5;

    cout<<"\nx is "<<x;
    cout<<"\nref is "<<a;

    return 0;


}
