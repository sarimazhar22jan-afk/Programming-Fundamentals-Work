#include<iostream>
using namespace std;
main(){
    int salary = 10000;
    int laptop = 50000;
    int advance = 10000 * 6 * 0.5;
    if(advance >= laptop){
        cout <<"Ali can buy this laptop";
    }
    else{
        int monthlysaving = salary * 0.5;
        int months = laptop/monthlysaving;
        cout <<"Months required to buy a laptop " <<months;
    }
}