#include <iostream>
using namespace std;

int main()
{
    int age, moves;
    double averageYears;

    
    cout << "Enter age: ";
    cin >> age;

    cout << "Enter moves: ";
    cin >> moves;


    averageYears = (double)age / (moves + 1);   

    cout << "Average years = " << averageYears;

}