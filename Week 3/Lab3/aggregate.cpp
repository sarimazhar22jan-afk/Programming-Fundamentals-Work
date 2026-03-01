#include<iostream>
using namespace std;
int main()
{
cout<<"Enter your Name :";
string name;
cin>>name;

cout<<"Enter your Matriculation marks (out of 1100) :";
int matric;
cin>>matric;

cout<<"Enter your intermediate marks (out of 570) :";
int inter;
cin>>inter;

cout<<"Enter your ECAT marks (out of 400) :";
int ecat;
cin>>ecat;

int matricpercent;
matricpercent = (matric/1100.0)*100;

int interpercent;
interpercent = (inter/570.0)*100;

int ecatpercent;
ecatpercent = (ecat/400.0)*100;

int aggregate;
aggregate = (matricpercent * 0.10) +(interpercent * 0.40) +(ecatpercent * 0.50);

 cout << "Aggregate score for " << name << " is " << aggregate << "%" << endl;

    return 0;
}