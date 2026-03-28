#include <iostream>
using namespace std;

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Enter " << size << " elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    bool isSpecial = true;
    
    for (int i = 0; i < size; i++) {

        if (i % 2 == 0) {
            if (arr[i] % 2 != 0) {
                isSpecial = false;
                break;
            }
        }

        else {
            if (arr[i] % 2 == 0) {
                isSpecial = false;
                break;
            }
        }
    }
    
    if (isSpecial) {
        cout << "\nThe array is special" << endl;
    } else {
        cout << "\nThe array is not special" << endl;
    }
    
    return 0;
}