/*
    Created by premal upadhyay
*/
#include<iostream>

using namespace std;

class test{

  int no;
  static int count;
public:
  void getval();
  void putval();
  static void dispcount();
};
int test::count;

void test::getval()
{

  no=++count;
}
void test::putval()
{
  cout<<"\nobject number:"<<no;
}
void test::dispcount()
{
  cout<<endl<<"counter is :"<<count;
}
int main()
{
  test t1,t2,t3;
  t1.getval();
  t2.getval();
  test::dispcount();
  t3.getval();
  test::dispcount();
  t1.putval();
  t2.putval();
  t3.putval();
  return 0;

}
