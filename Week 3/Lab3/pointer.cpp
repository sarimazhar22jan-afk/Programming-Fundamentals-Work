#include <iostream>
using namespace std;

int main() 
{
    int twoPointers, threePointers;
    int totalPoints;

  
    cout << "Enter 2 pointers: ";
    cin >> twoPointers;

    cout << "Enter 3 pointers: ";
    cin >> threePointers;

   
    totalPoints = (twoPointers * 2) + (threePointers * 3);

    
    cout << "Total points = " << totalPoints;
}