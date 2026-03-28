#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "How many numbers do you want to enter? ";
    cin >> n;
    
    int numbers[n];
    
    cout << "Enter " << n << " numbers:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    cout << "\nThe numbers you entered are:" << endl;
    for(int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}