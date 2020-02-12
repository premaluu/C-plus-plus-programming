/*
    Created by premal upadhyay
*/
//inside class member function
//in this program we define the method(function) of object inside of class

#include <iostream>

using namespace std;

class add  //supose we create the class of add which means addition
{
private:  //for secure data
    int a,b,c;  //our data
    public: //for access method(function) in main or whole program

    void getdata()  //get data method for getting or input data from user
    {
        cout<<"\nenter the two number\n";
        cin>>a>>b;
    }

    void addtion() //addtion for addtion of data which we get from user
    {
        c=a+b; //for perform addition of data
    }
    void display()
    {
        cout<<"\naddtion is \n"<<c;
    }



};


int main()
{
    class add o1;
    o1.getdata();
    o1.addtion();
    o1.display();
    return 0;
}
