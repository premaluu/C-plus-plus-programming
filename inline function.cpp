/*
    Created by premal upadhyay
*/
//inline function

/*inline function is feature of c++ which not in c programming.
in normal function declaration and defination the cursor jump on the defination of function when function call in main function.
but in inline function the lines of function defination is intialized at calling of function*/
#include <iostream>

using namespace std;


inline int sum(int a,int b)
{
    return a+b;

}



int main()
{
    int a=10,b=20,c;
    c=sum(a,b);
    cout<<endl<<"ans is "<<c;
    return 0;
}
