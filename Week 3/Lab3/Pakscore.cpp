#include<iostream>
using namespace std;
int main()
{
cout<<"Enter the number of wins: ";
int wins;
cin>>wins;

cout<<"Enter the numbers of draws: ";
int draws;
cin>>draws;

cout<<"Enter the number of Losses: ";
int losses;
cin>>losses;

int total;
total = (wins * 3)+(draws * 1)+(losses * 0);
cout<<"Pakistan has obtained "<<total<<" in Asia cup Tournament";
}