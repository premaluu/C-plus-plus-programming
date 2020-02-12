/*
    Created by premal upadhyay
*/
//call by value
#include<iostream>
#include<conio.h>

using namespace  std;

void swap(int,int);

int main()
{
    int a,b;

    cout<<endl<<"enter the a&b"<<endl;
    cin>>a>>b;

    cout<<"\nbefore swapping a="<<a<<"b="<<b;
    swap(a,b);
    cout<<"\nafter swapping a="<<a<<"b="<<b;
    return 0;
}
void swap(int a,int b)
{
    int temp;

    temp=a;
    a=b;
    b=temp;
}
