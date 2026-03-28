#include <iostream>
using namespace std;

int main() {
    string bookTitles[100];
    string bookStatus[100]; 
    int bookCount = 0;
    int choice;
    
    do {

        cout << "\n===== LIBRARY SYSTEM =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 1) {
            
            if (bookCount < 100) {
                cout << "Enter book title: ";
                cin.ignore();
                getline(cin, bookTitles[bookCount]);
                bookStatus[bookCount] = "Available";
                bookCount++;
                cout << "Book added successfully!" << endl;
            } else {
                cout << "Library is full! Cannot add more books." << endl;
            }
        }
        else if (choice == 2) {
            
            if (bookCount == 0) {
                cout << "No books in the library." << endl;
            } else {
                cout << "\n--- List of Books ---" << endl;
                for (int i = 0; i < bookCount; i++) {
                    cout << i + 1 << ". " << bookTitles[i] 
                         << " [" << bookStatus[i] << "]" << endl;
                }
            }
        }
        else if (choice == 3) {
            
            if (bookCount == 0) {
                cout << "No books available to borrow." << endl;
            }
            else {
                
                cout << "\n--- Available Books ---" << endl;
                int availableCount = 0;
                for (int i = 0; i < bookCount; i++) {
                    if (bookStatus[i] == "Available") {
                        cout << i + 1 << ". " << bookTitles[i] << endl;
                        availableCount++;
                    }
                }
                
                if (availableCount == 0) {
                    cout << "No books available for borrowing." << endl;
                }
                else {
                    int bookNumber;
                    cout << "Enter book number to borrow: ";
                    cin >> bookNumber;
                    
                    if (bookNumber >= 1 && bookNumber <= bookCount) {
                        int index = bookNumber - 1;
                        if (bookStatus[index] == "Available") {
                            bookStatus[index] = "Borrowed";
                            cout << "You have successfully borrowed \"" 
                                 << bookTitles[index] << "\"." << endl;
                        }
                        else {
                            cout << "Sorry, this book is already borrowed." << endl;
                        }
                    }
                    else {
                        cout << "Invalid book number!" << endl;
                    }
                }
            }
        }
        else if (choice == 4) {
            
            if (bookCount == 0) {
                cout << "No books in the library." << endl;
            }
            else {
                
                cout << "\n--- Borrowed Books ---" << endl;
                int borrowedCount = 0;
                for (int i = 0; i < bookCount; i++) {
                    if (bookStatus[i] == "Borrowed") {
                        cout << i + 1 << ". " << bookTitles[i] << endl;
                        borrowedCount++;
                    }
                }
                
                if (borrowedCount == 0) {
                    cout << "No books are currently borrowed." << endl;
                }
                else {
                    int bookNumber;
                    cout << "Enter book number to return: ";
                    cin >> bookNumber;
                    
                    if (bookNumber >= 1 && bookNumber <= bookCount) {
                        int index = bookNumber - 1;
                        if (bookStatus[index] == "Borrowed") {
                            bookStatus[index] = "Available";
                            cout << "You have successfully returned \"" 
                                 << bookTitles[index] << "\"." << endl;
                        }
                        else {
                            cout << "This book was not borrowed." << endl;
                        }
                    }
                    else {
                        cout << "Invalid book number!" << endl;
                    }
                }
            }
        }
        else if (choice == 5) {
            cout << "Thank you for using the Library Management System!" << endl;
        }
        else {
            cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
        }
        
    } while (choice != 5);
    
    return 0;
}