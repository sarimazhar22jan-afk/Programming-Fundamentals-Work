#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    float average = 0;
    int numbers[5] = {1, 2, 3, 4, 5};
    
    for (int idx = 0; idx < 5; idx += 1)
    {
        sum = sum + numbers[idx];
    }
    
    average = sum / 5.0; 
    cout << "Sum: " << sum << endl;
    cout << "Avg: " << average << endl;
    
    return 0;
}