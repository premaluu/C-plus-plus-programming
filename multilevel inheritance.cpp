/*
    Created by premal upadhyay
*/
#include<iostream>
using namespace std;

class A//grand parent class
{
public:

	int x,y;

	void getdata()
	{



	cout<<"\nenter the x,y";
	cin>>x>>y;
	}

};

class B:public A
{
public:

int c;
	void add()
	{
		int u=x+y;

	}

};

class c:public B
{
public:

	void show()
	{
		cout<<"\nans is "<<c;
	}

};


int main()
{

	class c o1;

	o1.getdata();
	o1.add();
	o1.show();

	return 0;
	}
