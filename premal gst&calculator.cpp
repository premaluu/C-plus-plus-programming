/*
    Created by premal upadhyay
*/
#include<iostream>
#include<conio.h>

using namespace std;

class premal{
    private:
    int a,b;



public:

     void add()
     {

        cout<<"\n|";cout<<"enter the two no";cout<<"|\n";
        cin>>a>>b;
        cout<<"\n|";cout<<"ans is "<<a+b;cout<<"|\n";


     }
    void sub()
    {
        cout<<"\n|";cout<<"enter the two no";cout<<"|\n";
        cin>>a>>b;
        cout<<"\n|";cout<<"ans is "<<a-b;cout<<"|\n";
    }
    void mul()
    {
        cout<<"\n|";cout<<"enter the two no";cout<<"|\n";
        cin>>a>>b;
        cout<<"\n|";cout<<"ans is "<<a*b;cout<<"|\n";
    }
    void div()
    {
        cout<<"\n|";cout<<"enter the two no";cout<<"|\n";
        cin>>a>>b;
        cout<<"\n|";cout<<"ans is "<<a/b;cout<<"| \n";
    }
    void gst()
    {
            float  a,c,gst,k;
            cout<<"\n|";cout<<"enter the amount of your item in RS.";cout<<"|\n";
            cin>>a;
            cout<<"\n|";cout<<"entter the amount of GST in %";cout<<"|\n";
            cin>>k;
            if(k==28||k==5||k==18||k==12)
            {
                c=a*k/100;
                gst=c+a;
                cout<<"\n|";cout<<"After include GST is "<<gst<<"RS.";cout<<"|\n";
            }
            else
            {
                cout<<"\n|";cout<<"Enter GST is between 5 to 28%";cout<<"|\n";
            }
    }

};

class select{

private:
    int a;

public:

    void choice()
    {
        premal y;
        cout<<"|";cout<<"1.addtion";cout<<"|\n\n";
       cout<<"|";cout<<"-------------";cout<<"|\n\n";
        cout<<"|";cout<<"2.subtraction";cout<<"|\n\n";
        cout<<"|";cout<<"-------------";cout<<"|\n\n";
        cout<<"|";cout<<"3.multification";cout<<"|\n\n";
        cout<<"|";cout<<"-------------";cout<<"|\n\n";
        cout<<"|";cout<<"4.division";cout<<"|\n\n";
        cout<<"|";cout<<"-------------";cout<<"|\n\n";
        cout<<"|";cout<<"5.GST";cout<<"|\n\n";
        cout<<"|";cout<<"-------------";cout<<"|\n\n";
        cout<<"|";cout<<"enter the choice which u want to calculate";cout<<"|\n";
        cin>>a;

        switch(a)
        {
        case 1:
            {
                y.add();
                break;
            }
        case 2:
            {
                y.div();
                break;
            }
        case 3:
            {
                y.mul();
                break;
            }
        case 4:
            {
                y.div();
                break;
            }
        case 5:
            {
                y.gst();
                break;
            }
        default :
            {
                cout<<"\nenter choice from 1 to 5";
            }

        }

    }






};



int main()
{
    select x;

     x.choice();



    return 0;
    getch();
}


