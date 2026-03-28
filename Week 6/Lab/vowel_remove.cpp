#include <iostream>
using namespace std;

int main() {

    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int vowelCount = 10;
    
    string input;
    string result = "";
    bool isVowel;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    for (int i = 0; i < input.length(); i++) {
        isVowel = false;
        
        for (int j = 0; j < vowelCount; j++) {
            if (input[i] == vowels[j]) {
                isVowel = true;
                break;
            }
        }
        
        if (!isVowel) {
            result += input[i];
        }
    }
    
    cout << "String with vowels removed: " << result << endl;
    
    return 0;
}