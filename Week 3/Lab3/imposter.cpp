#include<iostream>
using namespace std;
main()
{
cout<<"Enter imposters: ";
int imposter;
cin>>imposter;

cout<<"Enter Players: ";
int player;
cin>>player;
int chance;
chance = 100 * (imposter/player);
cout<<"Chance = "<<chance;
}