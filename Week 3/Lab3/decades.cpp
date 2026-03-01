#include<iostream>
using namespace std;
int main()
{

cout<<"Enter the curret population of the world: ";
int population;
cin>>population;

cout<<"Enter the monthly birth rate (number of birth per month): ";
int birth;
cin>>birth;

int finalpopulation;
finalpopulation = population + (birth * 360);

cout<<"Population in three decades wil be: "<<finalpopulation;
}