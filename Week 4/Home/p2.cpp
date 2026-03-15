#include<iostream>
using namespace std;
main(){
cout<<"Enter the speed of car in km/h: ";
int speed;
cin>>speed;
if (speed > 100){
cout <<"Halt....YOU WILL BE CHALLANED!!!";
}
if (speed <= 100){
    cout<<"Perfect! your going good.";
}
}