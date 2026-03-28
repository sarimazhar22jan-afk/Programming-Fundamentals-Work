#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number of flights: ";
    cin >> n;
    
    int flightNumber[n];
    string destination[n];
    int seatsAvailable[n];
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter flight number for flight " << i + 1 << ": ";
        cin >> flightNumber[i];
        
        cout << "Enter destination for flight " << flightNumber[i] << ": ";
        cin >> destination[i];
        
        cout << "Enter seats available for flight " << flightNumber[i] << ": ";
        cin >> seatsAvailable[i];
    }
    
    cout << "\nFlight Information:" << endl;
    cout << "---" << endl;
    
    for (int i = 0; i < n; i++) {
        cout << "Flight " << flightNumber[i] << " to " << destination[i] 
             << " has " << seatsAvailable[i] << " seats available." << endl;
    }
    
    cout << "\nFlights with less than 5 seats available:" << endl;
    cout << "---" << endl;
    
    bool foundLowSeats = false;
    for (int i = 0; i < n; i++) {
        if (seatsAvailable[i] < 5) {
            cout << "Flight " << flightNumber[i] << " to " << destination[i] 
                 << " has only " << seatsAvailable[i] << " seats left!" << endl;
            foundLowSeats = true;
        }
    }
    
    if (!foundLowSeats) {
        cout << "No flights with less than 5 seats available." << endl;
    }
    
    return 0;
}