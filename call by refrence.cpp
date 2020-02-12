/*
    Created by premal upadhyay
*/
#include <iostream>

using namespace std;

void swap(int&a,int&b);

int main()
{
    int a,b;
    cout << "enter the a,b" << endl;
    cin>>a>>b;

    cout<<"\nbefore swapping";
    cout<<endl<<"a="<<a;
    cout<<"\nb="<<b;

    swap(a,b);

    cout<<"\nafter swapping";
    cout<<"\na="<<a;
    cout<<"\nb="<<b;
    return 0;
}

void swap(int&a,int&b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
