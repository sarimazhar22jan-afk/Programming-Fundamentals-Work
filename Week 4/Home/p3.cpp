#include<iostream>
using namespace std;
main(){
cout<<"Enter the temperature of city 1: ";
int city1;
cin>>city1;
cout<<"Enter the temperature of city 2: ";
int city2;
cin>>city2;
int diff;
diff = city1 - city2;
if (diff > 10){
    cout <<"Difference is too big"<<endl;
}
cout <<"Program Ends";
}