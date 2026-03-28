#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    
    cout << "Enter 5 integers:" << endl;
    
    cout << "Enter element at index 0: ";
    cin >> numbers[0];
    
    cout << "Enter element at index 1: ";
    cin >> numbers[1];
    
    cout << "Enter element at index 2: ";
    cin >> numbers[2];
    
    cout << "Enter element at index 3: ";
    cin >> numbers[3];
    
    cout << "Enter element at index 4: ";
    cin >> numbers[4];
    
    cout << "\nThe 2nd element at location numbers[1] is: " << numbers[1] << endl;
    cout << "The 4th element at location numbers[3] is: " << numbers[3] << endl;
    
    return 0;
}