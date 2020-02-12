/*
    Created by premal upadhyay
*/
//static data member
#include<iostream>

using namespace std;

class test{

  int no;
  static int count;
public:
  void getval(int);
  void dispcount();

};
int test::count;//we have initialize static data member outside of class because we can't initialize it inside of class

void test::getval(int x)
{
  no=x;
  cout<<"\nnumber is "<<no;
  count++;
}
void test::dispcount()
{
  cout<<"\ncounter is "<<count;
}
int main()
{
  test t1,t2,t3;
  t1.getval(200);
  t2.getval(100);
  t3.getval(50);
  t1.dispcount();
  t2.dispcount();
  t3.dispcount();
  return 0;
}
