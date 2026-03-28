#include <iostream>
using namespace std;

int main() {
    int a;
    
    cout << "Enter number of customers: ";
    cin >> a;
    
    string customers[a];
    
    cout << "Enter the names of " << a << " customers:" << endl;
    for (int i = 0; i < a; i++) {
        cin >> customers[i];
    }
    
    char letter;
    cout << "Enter a letter to check: ";
    cin >> letter;
    
    int count = 0;
    for (int i = 0; i < a; i++) {

        if (customers[i][0] == letter) {
            count++;
        }
    }
    
    cout << "Total names starting with '" << letter << "': " << count << endl;
    
    return 0;
}