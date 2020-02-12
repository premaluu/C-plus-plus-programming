/*
    Created by premal upadhyay
*/
#include<iostream>
#include<conio.h>

using namespace std;
class box
{
	int p,q;
	public:
	box()
	{
		cout<<"\ndefault constructor";
		p=10;
		q=20;

	}

	box(int x,int y)
	{
	    cout<<"\nperameterize constructor";
        p=x,q=y;

	}
	box(const box &a)
	{
	    cout<<"\ncopy constructor";
	    p=a.p;
	    q=a.q;

	}


	void show()
	{
		cout<<"\naddtion is :"<<p+q;

	}


};


int main()
{
       class box a;


	a.show();
	box b(30,40);
	b.show();
    box c(a);
    c.show();

	getch();
	return 0;

}
