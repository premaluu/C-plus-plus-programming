/*
    Created by premal upadhyay
*/
#include<iostream>
using namespace std;
class A //parent class
{
    public: int x,y;

    void getdata()
    {
        cout << "\nenter the x and y ";
        cin >> x >> y;


    }
};
class B:public A //child class
{
public:

    void  show()
    {
    cout<<"\nans is  "<<x+y;

    }
    };

int main()

{
    class B o1;

    o1.getdata();
    o1.show();

}
