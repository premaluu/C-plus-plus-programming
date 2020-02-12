/*
    Created by premal upadhyay
*/
//friend function program
#include <iostream>

using namespace std;
class two;
class one
{
private:
    int a;

    public:

        void getdata()
        {
            cout<<"\nenter the value of A:";
            cin>>a;
        }
  friend void add(one,two);

};

class two
{
private:
    int b;
public:

    void getdata()
    {
        cout<<"\nenter the B:";
        cin>>b;
    }
  friend void add(one,two);
};

void add(one o1,two o3)
{
    cout<<"\nans is "<<o1.a+o3.b;
}

int main()
{
    class one o1;
    class two o3;

    o1.getdata();
    o3.getdata();
    add(o1,o3);

    return 0;
}
