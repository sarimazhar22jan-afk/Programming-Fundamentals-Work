#include<iostream>
using namespace std;
main()
{
cout<<"Enter size of the fertilizer bag in pounds: ";
float weight;
cin>>weight;

cout<<"Enter the cost of bag: $";
float cost;
cin>>cost;

cout<<"Enter the area in square feet that can be coverd by the bag: "; 
float area;
cin>>area;

int costperpound;
costperpound = cost/weight;
int costsquarefoot = cost/area;
  cout << "Cost of fertilizer per pound is: $" << costperpound<<endl;
  cout << "Cost of fertilizing per square foot is: $" << costsquarefoot<<endl; 
}