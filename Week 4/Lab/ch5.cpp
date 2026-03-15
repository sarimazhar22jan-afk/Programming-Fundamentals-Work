#include<iostream>
using namespace std;
int main(){
int bill; 
double discount, finalbill;
cout<<"Enter your total Bill: ";
cin>>bill;
if(bill > 5000){
discount = bill*0.10;
}
else{
    discount = bill*0.05;
}
finalbill = bill - discount;
cout<<"Your bill after discount is "<< finalbill;

}