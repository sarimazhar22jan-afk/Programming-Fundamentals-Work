#include <iostream>
using namespace std;

int main() 
{
    
    cout << "Enter the number of sides of the polygon: ";
    int n;
    cin >> n;

    if (n < 3) {
        cout << "A polygon must have at least 3 sides."<< endl;
    } else {
        int sum = (n - 2) * 180;
        cout << "The total sum of interior angles of a " 
             << n << "-sided polygon is: " 
             << sum << " degrees"<< endl;
    }

    return 0;
}