/*
    Created by premal upadhyay
*/
//manipulator

#include <iostream>
#include<iomanip>//i/o manpulaor header file for manipulators
using namespace std;

int main()
{
    int a;

    cout<<endl<<"hiii"; //'endl' mean endline its take cursor to next line its same as '\n'but it flush buffer(cache) value of keyboard

    cout<<endl<<setw(10)<<"premal"; //'setw()' set the width for manipulation in after manipulation then prins the statement

    cout<<endl<<setw(10)<<setfill('$')<<"premal";

    return 0;
}
