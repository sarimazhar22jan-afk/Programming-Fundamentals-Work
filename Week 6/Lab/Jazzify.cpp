#include <iostream>
using namespace std;

int main() {
    int numChords;
    
    cout << "Enter the number of chords: ";
    cin >> numChords;
    cin.ignore(); 
    
    string chords[numChords];
    
    cout << "Enter " << numChords << " chords, one per line:" << endl;
    for (int i = 0; i < numChords; i++) {
        getline(cin, chords[i]);
    }
    
    for (int i = 0; i < numChords; i++) {

        if (chords[i].length() > 0 && chords[i].back() != '7') {
            chords[i] += "7";
        }
    }
    
    cout << "\nJazzified chords: [";
    for (int i = 0; i < numChords; i++) {
        cout << chords[i];
        if (i < numChords - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}