#include<iostream>
using namespace std;
main()
{
cout<<"Enter initial velocity(m/s) : ";
int initial;
cin>>initial;

cout<<"Enter Acceleration: ";
int acceleration;
cin>>acceleration;

cout<<"Enter the time in seconds: ";
int time;
cin>>time;

int finalvelocity;
finalvelocity = (acceleration*time) + initial;
cout<<"Final Velocity: "<<finalvelocity;
}