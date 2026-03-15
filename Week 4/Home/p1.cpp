#include<iostream>
using namespace std;
int main(){
    int ticket;
    float discount;
    cout <<"Enter the country you want to travel: ";
    string travel;
    cin>>travel;
    cout <<"Enter the ticket price: ";
    cin>>ticket;
    if (travel == "Ireland"){
       discount = ticket * 0.1;
    }
else{
    discount = ticket * 0.05;
}
float finalprice = ticket - discount;
cout << "Price of ticket after discount is "<<finalprice;
}