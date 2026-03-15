#include<iostream>
using namespace std;
main(){
cout<<"Enter the Number: "; 
int number;
cin>>number; 
cout<<"The second number: ";
int number2;
cin>>number2;
if(number<number2){
    cout<<"number "<<number2<<" is greater then " <<number; 
}
else{
    cout<<"number "<<number <<" is greater then " <<number2;
}
}