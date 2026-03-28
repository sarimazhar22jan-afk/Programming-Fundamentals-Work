#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[100];
    int uniqueCount = 0;
    
    cout << "Enter " << n << " numbers, one per line:" << endl;
    
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        
        bool alreadyExists = false;
        for (int j = 0; j < uniqueCount; j++)
        {
            if (arr[j] == num)
            {
                alreadyExists = true;
                break;
            }
        }
        
        if (alreadyExists)
        {
            cout << "Already Entered: " << num << endl;
        }
        else
        {
            arr[uniqueCount] = num;
            uniqueCount++;
        }
    }
    
    cout << "Unique numbers entered: ";
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}