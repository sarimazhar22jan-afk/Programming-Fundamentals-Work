#include <iostream>
using namespace std;

int main() {
    const int FIRST_SIZE = 2;
    int firstArray[FIRST_SIZE];
    int secondArray[100]; 
    int secondSize;
    
    cout << "Enter the number of elements for the first array (must be 2): ";
    int firstSize;
    cin >> firstSize;
    
    if (firstSize != FIRST_SIZE) {
        cout << "Error: First array must have exactly 2 elements!" << endl;
        return 1;
    }
    
    cout << "Enter " << FIRST_SIZE << " elements for the first array, one per line:" << endl;
    for (int i = 0; i < FIRST_SIZE; i++) {
        cin >> firstArray[i];
    }
    
    cout << "Enter the number of elements for the second array: ";
    cin >> secondSize;
    
    cout << "Enter " << secondSize << " elements for the second array, one per line:" << endl;
    for (int i = 0; i < secondSize; i++) {
        cin >> secondArray[i];
    }
    
    int resultSize = FIRST_SIZE + secondSize;
    int resultArray[resultSize];
    
    resultArray[0] = firstArray[0];

    for (int i = 0; i < secondSize; i++) {
        resultArray[i + 1] = secondArray[i];
    }
    
    resultArray[resultSize - 1] = firstArray[1];
    
    cout << "Resulting array: [";
    for (int i = 0; i < resultSize; i++) {
        cout << resultArray[i];
        if (i < resultSize - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}