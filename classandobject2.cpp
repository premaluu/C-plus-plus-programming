/*
    Created by premal upadhyay
*/
#include<iostream>
#include<conio.h>

using namespace std;

class student
{
  int roll;
  string name;
public:
  void getdata()
  {
    cout << "\nEnter the roll no :- ";
    cin >> roll;
    cout << "\nEnter the name :- ";
    cin >> name;
  }
  void putdata()
  {
    cout << "\nStudent roll number :- " << roll;
    cout << "\nStudent name :- " << name;
  }
};

int main()
{
  student s1, s2;
  st.getdata();
  s2.getdata();
  s1.putdata();
  s2.putdata();
  return 0;

}
