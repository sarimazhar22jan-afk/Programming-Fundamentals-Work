#include<iostream>
using namespace std;
int main()
{
cout<<"Enter the Charge in Coulombs :";
int coulombs;
cin>>coulombs;
cout<<"Enter the time in seconds :";
int time;
cin>>time;
int total;
total = coulombs/time;
cout<<"Total Current :"<<total; 
}