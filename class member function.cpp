/*
    Created by premal upadhyay
*/
//class also define the function(method of object) in class
//arithmetic solution using class and member function
//the functionality define in class is call as member function
#include <iostream>

using namespace std;

class math //here we create the class of math for mathematical function
{
private:  //private is used to make your data secure by class defination is in private
    int a,b,c,d,e,f;

    public: //here we define the method of object.the private data of class(menas your data can access in only data declared class)

    void getdata(void)//here we create function(method) for work of object. this method is for get data from user
    {
        cout<<"\nenter two number\n";
        cin>>a>>b; //a and b data access in this class that's why we take it for input of data
    }
    void add(void) //add method for addtion of entered values(inputs)
    {
        c=a+b;
    }
    void sub(void) //sub method for  subtraction of entered values(inputs)
    {
        d=a-b;
    }

    void mul(void) //mul method for multification of entered value(inputs)
    {
        e=a*b;
    }
    void div(void) //div for division of entered values(inputs)
    {
        f=a/b;
    }
    void display(void) //display for printing(display) answer

    {
        cout<<"\naddtion is\n"<<c;
        cout<<"\ndivision is\n"<<d;
        cout<<"\nmultifiaction is\n"<<e;
        cout<<"\ndivsion\n"<<f;

    }
};
int main()
{

    class math o1;

    o1.getdata();
    o1.add();
    o1.sub();
    o1.mul();
    o1.div();
    o1.display();

    return 0;
}
