#include<iostream>
using namespace std;
main(){
cout <<"Holidays: ";
int holidays;
cin>>holidays;
int working_days = 365 - holidays;
int gametime = (working_days*63) + (holidays*127);
int diff = 30000 - gametime;
int hours = diff/60;
int mint = diff%60;
if (gametime > 30000){
    cout<<"Tom will run away";
    cout <<hours <<"hours and "<<mint <<" minutes for play";
}
else{
     cout << "Tom sleeps well" << endl;
    cout <<hours <<"hours and "<<mint <<" minutes less for play";
}
}