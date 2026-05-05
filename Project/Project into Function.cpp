#include <iostream>
#include <conio.h>
using namespace std;

const int TOTAL_BOOKS = 1000; // total size

// Global data structures
string titleArray[TOTAL_BOOKS] = {"C++ Programming", "Data Structures", "Algorithms", "Database Systems", "Operating Systems", "Computer Networks", "Software Engineering"};
string authorArray[TOTAL_BOOKS] = {"Bjarne Stroustrup", "Robert Sedgewick", "Thomas Cormen", "Ramez Elmasri", "Abraham Silberschatz", "Andrew Tanenbaum", "Ian Sommerville"};
int yearArray[TOTAL_BOOKS] = {2013, 2011, 2009, 2016, 2018, 2020, 2015};
string genreArray[TOTAL_BOOKS] = {"Programming", "Computer Science", "Computer Science", "Database", "Operating Systems", "Networking", "Software Engineering"};
bool availableArray[TOTAL_BOOKS] = {true, true, true, true, true, true, true};
int index = 7;

// Function prototypes
void showAllBooks();
void searchBook();
void addNewBook();
void updateBookRecord();
void deleteBookRecord();
void adminMenu();
void studentMenu();
void mainMenu();

void showAllBooks()
{
    cout << "Title	Author	Year	Genre	Available" << endl;
    for (int i = 0; i < index; i++)
    {
        if (titleArray[i] != "")
        {
            cout << titleArray[i] << "	" << authorArray[i] << "	" << yearArray[i] << "	" << genreArray[i] << "	" << (availableArray[i] ? "Yes" : "No") << endl;
        }
    }
}

void searchBook()
{
    cout << "Enter the title you want to search: ";
    string title;
    cin >> title;
    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < index; i++)
    {
        if (titleArray[i] == title)
        {
            foundindex = i;
            found = true;
        }
    }
    if (!found)
    {
        cout << "Book not found with title " << title << endl;
    }
    else
    {
        cout << "Title	Author	Year	Genre	Available" << endl;
        cout << titleArray[foundindex] << "	" << authorArray[foundindex] << "	" << yearArray[foundindex] << "	" << genreArray[foundindex] << "	" << (availableArray[foundindex] ? "Yes" : "No") << endl;
    }
}

void addNewBook()
{
    if (index < TOTAL_BOOKS)
    {
        cout << "Enter book title: ";
        string title;
        cin >> title;
        cout << "Enter author: ";
        string author;
        cin >> author;
        cout << "Enter publication year: ";
        int year;
        cin >> year;
        cout << "Enter genre: ";
        string genre;
        cin >> genre;

        titleArray[index] = title;
        authorArray[index] = author;
        yearArray[index] = year;
        genreArray[index] = genre;
        availableArray[index] = true;
        index++;
        cout << "Book added successfully!" << endl;
    }
    else
    {
        cout << "Library is full. Cannot add more books." << endl;
    }
}

void updateBookRecord()
{
    cout << "Enter the title of the book you want to update: ";
    string title;
    cin >> title;
    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < index; i++)
    {
        if (titleArray[i] == title)
        {
            foundindex = i;
            found = true;
        }
    }
    if (found)
    {
        cout << "Enter new title: ";
        string newTitle;
        cin >> newTitle;
        cout << "Enter new author: ";
        string newAuthor;
        cin >> newAuthor;
        cout << "Enter new publication year: ";
        int newYear;
        cin >> newYear;
        cout << "Enter new genre: ";
        string newGenre;
        cin >> newGenre;

        titleArray[foundindex] = newTitle;
        authorArray[foundindex] = newAuthor;
        yearArray[foundindex] = newYear;
        genreArray[foundindex] = newGenre;
        cout << "Book updated successfully!" << endl;
    }
    else
    {
        cout << "Book not found." << endl;
    }
}

void deleteBookRecord()
{
    cout << "Enter the title of the book you want to delete: ";
    string title;
    cin >> title;
    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < index; i++)
    {
        if (titleArray[i] == title)
        {
            foundindex = i;
            found = true;
        }
    }
    if (found)
    {
        titleArray[foundindex] = "";
        authorArray[foundindex] = "";
        yearArray[foundindex] = 0;
        genreArray[foundindex] = "";
        availableArray[foundindex] = false;
        cout << "Book deleted successfully!" << endl;
    }
    else
    {
        cout << "Book not found." << endl;
    }
}

void adminMenu()
{
    int countattemp = 0;
    for (int i = 0; i < 3; i++)
    {
        system("cls");
        cout << "Admin Menu: Login attempt " << i + 1 << endl;
        cout << "Enter username: ";
        string username;
        cin >> username;
        cout << "Enter password: ";
        string password;
        cin >> password;
        if (username == "admin" && password == "123")
        {
            cout << "Login Success";

            while (true)
            {
                system("cls");
                cout << "1 Show all books " << endl;
                cout << "2 Search Book " << endl;
                cout << "3 Add new book " << endl;
                cout << "4 Update book record " << endl;
                cout << "5 Delete book record " << endl;
                cout << "6 Logout" << endl;
                cout << "Choose the option: ";
                string adminoption;
                cin >> adminoption;
                if (adminoption == "1")
                {
                    showAllBooks();
                }
                else if (adminoption == "2")
                {
                    searchBook();
                }
                else if (adminoption == "3")
                {
                    addNewBook();
                }
                else if (adminoption == "4")
                {
                    updateBookRecord();
                }
                else if (adminoption == "5")
                {
                    deleteBookRecord();
                }
                else if (adminoption == "6")
                {
                    break;
                }
                else
                {
                    cout << "Invalid option!" << endl;
                }
                cout << "Press any key to continue...";
                getch();
            }
            break;
        }
        else
        {
            cout << "Invalid username or password." << endl;
        }
        cout << "Press any key to continue...";
        getch();
    }
}

void studentMenu()
{
    system("cls");
    cout << "Welcome to Library Student Menu" << endl;
    cout << "1 Borrow a book " << endl;
    cout << "2 Return a book " << endl;
    cout << "3 View all books " << endl;
    cout << "Choose option: ";
    string studentoption;
    cin >> studentoption;
    if (studentoption == "1")
    {
        cout << "Enter the title of the book you want to borrow: ";
        string title;
        cin >> title;
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < index; i++)
        {
            if (titleArray[i] == title && availableArray[i])
            {
                foundindex = i;
                found = true;
                break;
            }
        }
        if (found)
        {
            availableArray[foundindex] = false;
            cout << "Book borrowed successfully!" << endl;
        }
        else
        {
            cout << "Book not available or not found." << endl;
        }
    }
    else if (studentoption == "2")
    {
        cout << "Enter the title of the book you want to return: ";
        string title;
        cin >> title;
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < index; i++)
        {
            if (titleArray[i] == title && !availableArray[i])
            {
                foundindex = i;
                found = true;
                break;
            }
        }
        if (found)
        {
            availableArray[foundindex] = true;
            cout << "Book returned successfully!" << endl;
        }
        else
        {
            cout << "Book not found or already returned." << endl;
        }
    }
    else if (studentoption == "3")
    {
        showAllBooks();
    }
    else
    {
        cout << "Invalid option!" << endl;
    }
    cout << "Press any key to continue...";
    getch();
}

void mainMenu()
{
    while (true)
    {
        system("cls");
        cout << "--------------------------------------------------" << endl;
        cout << "------Library Management System------------------" << endl;
        cout << "--------------------------------------------------" << endl;

        cout << "User Menu " << endl;
        cout << "1 Admin " << endl;
        cout << "2 Student " << endl;
        cout << "3 Exit " << endl;
        cout << "Choose option: ";
        string useroption;
        cin >> useroption;

        cout << "You chose " << useroption << endl;
        if (useroption == "1")
        {
            adminMenu();
        }
        else if (useroption == "2")
        {
            studentMenu();
        }
        else if (useroption == "3")
        {
            break;
        }
        else
        {
            cout << "Invalid option!" << endl;
        }
    }
}

int main()
{
    mainMenu();
    cout << endl
         << "Thanks for using the Library Management System!";
    return 0;
}