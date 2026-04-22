#include <iostream>
#include <conio.h>
using namespace std;

main()
{
   int MAX_RECORDS = 1000;
   int totalStudents = 7;

   // arrays
   string studentNames[MAX_RECORDS] = {"ali", "ammar", "hira", "usman", "fatima", "zain", "maryam"};
   int studentAges[MAX_RECORDS] = {19, 20, 18, 21, 19, 20, 18};
   float matricMarks[MAX_RECORDS] = {789, 990, 870, 910, 950, 880, 970};
   float fscMarks[MAX_RECORDS] = {1050, 990, 1020, 980, 1010, 950, 1040};
   float ecatMarks[MAX_RECORDS] = {330, 350, 310, 340, 325, 315, 355};
   string choice1[MAX_RECORDS] = {"CS", "CE", "EE", "CS", "BBA", "CS", "AI"};
   string choice2[MAX_RECORDS] = {"CS", "EE", "CS", "AI", "CS", "BBA", "DS"};
   string choice3[MAX_RECORDS] = {"CE", "CS", "BBA", "EE", "AI", "CS", "CS"};
   float merit[MAX_RECORDS];

   while (true)
   {
      system("cls");
      cout << "----------------------------------------------" << endl;
      cout << "---- University Admission Management System ---" << endl;
      cout << "----------------------------------------------" << endl;

      cout << "1. Admin" << endl;
      cout << "2. Student" << endl;
      cout << "3. Exit" << endl;
      cout << "Select Option : ";

      string mainChoice;
      cin >> mainChoice;

      if (mainChoice == "1")
      {
         for (int attempt = 0; attempt < 3; attempt++)
         {
            system("cls");

            cout << "Admin Login Attempt " << attempt + 1 << endl;
            cout << "Enter Username : ";
            string user;
            cin >> user;

            cout << "Enter Password : ";
            string pass;
            cin >> pass;

            if (user == "admin" && pass == "123")
            {
               cout << "Login Successful";

               while (true)
               {
                  system("cls");

                  cout << "1 Show Students" << endl;
                  cout << "2 Search Student" << endl;
                  cout << "3 Update Student" << endl;
                  cout << "4 Merit List" << endl;
                  cout << "5 Delete Student" << endl;
                  cout << "6 Logout" << endl;
                  cout << "Choose : ";

                  string adminMenu;
                  cin >> adminMenu;

                  if (adminMenu == "1")
                  {
                     cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3" << endl;

                     for (int i = 0; i < totalStudents; i++)
                     {
                        if (studentNames[i] != "")
                        {
                           cout << studentNames[i] << "\t" << studentAges[i] << "\t"
                                << matricMarks[i] << "\t" << fscMarks[i] << "\t"
                                << ecatMarks[i] << "\t" << choice1[i] << "\t"
                                << choice2[i] << "\t" << choice3[i] << endl;
                        }
                     }
                  }

                  else if (adminMenu == "2")
                  {
                     cout << "Enter Name : ";
                     string findName;
                     cin >> findName;

                     bool isFound = false;
                     int pos = -1;

                     for (int i = 0; i < totalStudents; i++)
                     {
                        if (studentNames[i] == findName)
                        {
                           pos = i;
                           isFound = true;
                        }
                     }

                     if (isFound == true)
                     {
                        cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3" << endl;

                        cout << studentNames[pos] << "\t" << studentAges[pos] << "\t"
                             << matricMarks[pos] << "\t" << fscMarks[pos] << "\t"
                             << ecatMarks[pos] << "\t" << choice1[pos] << "\t"
                             << choice2[pos] << "\t" << choice3[pos] << endl;
                     }
                     else
                     {
                        cout << "Student Not Found";
                     }
                  }

                  else if (adminMenu == "3")
                  {
                     cout << "Enter Name To Update : ";
                     string oldName;
                     cin >> oldName;

                     bool found = false;
                     int pos = -1;

                     for (int i = 0; i < totalStudents; i++)
                     {
                        if (studentNames[i] == oldName)
                        {
                           found = true;
                           pos = i;
                        }
                     }

                     if (found == true)
                     {
                        cout << "Enter New Name : ";
                        string newName;
                        cin >> newName;

                        cout << "Enter Age : ";
                        int age;
                        cin >> age;

                        cout << "Enter Matric : ";
                        float mat;
                        cin >> mat;

                        cout << "Enter FSC : ";
                        float fsc;
                        cin >> fsc;

                        cout << "Enter ECAT : ";
                        float ec;
                        cin >> ec;

                        cout << "Enter Pref1 : ";
                        string p1;
                        cin >> p1;

                        cout << "Enter Pref2 : ";
                        string p2;
                        cin >> p2;

                        cout << "Enter Pref3 : ";
                        string p3;
                        cin >> p3;

                        studentNames[pos] = newName;
                        studentAges[pos] = age;
                        matricMarks[pos] = mat;
                        fscMarks[pos] = fsc;
                        ecatMarks[pos] = ec;
                        choice1[pos] = p1;
                        choice2[pos] = p2;
                        choice3[pos] = p3;
                     }
                     else
                     {
                        cout << "Record Not Found";
                     }
                  }

                  else if (adminMenu == "4")
                  {
                     for (int i = 0; i < totalStudents; i++)
                     {
                        merit[i] =
                            (matricMarks[i] / 1050.0 * 100 * 0.30) +
                            (fscMarks[i] / 1100.0 * 100 * 0.40) +
                            (ecatMarks[i] / 400.0 * 100 * 0.30);
                     }

                     for (int i = 0; i < totalStudents; i++)
                     {
                        for (int j = i + 1; j < totalStudents; j++)
                        {
                           if (merit[i] < merit[j])
                           {
                              string tempName = studentNames[i];
                              studentNames[i] = studentNames[j];
                              studentNames[j] = tempName;

                              int tempAge = studentAges[i];
                              studentAges[i] = studentAges[j];
                              studentAges[j] = tempAge;

                              float tempMat = matricMarks[i];
                              matricMarks[i] = matricMarks[j];
                              matricMarks[j] = tempMat;

                              float tempFsc = fscMarks[i];
                              fscMarks[i] = fscMarks[j];
                              fscMarks[j] = tempFsc;

                              float tempEcat = ecatMarks[i];
                              ecatMarks[i] = ecatMarks[j];
                              ecatMarks[j] = tempEcat;

                              string temp1 = choice1[i];
                              choice1[i] = choice1[j];
                              choice1[j] = temp1;

                              string temp2 = choice2[i];
                              choice2[i] = choice2[j];
                              choice2[j] = temp2;

                              string temp3 = choice3[i];
                              choice3[i] = choice3[j];
                              choice3[j] = temp3;

                              float tempMerit = merit[i];
                              merit[i] = merit[j];
                              merit[j] = tempMerit;
                           }
                        }
                     }

                     cout << "Name\tAge\tMerit" << endl;

                     for (int i = 0; i < totalStudents; i++)
                     {
                        if (studentNames[i] != "")
                        {
                           cout << studentNames[i] << "\t"
                                << studentAges[i] << "\t"
                                << merit[i] << endl;
                        }
                     }
                  }

                  else if (adminMenu == "5")
                  {
                     cout << "Enter Name To Delete : ";
                     string delName;
                     cin >> delName;

                     bool found = false;
                     int pos = -1;

                     for (int i = 0; i < totalStudents; i++)
                     {
                        if (studentNames[i] == delName)
                        {
                           found = true;
                           pos = i;
                        }
                     }

                     if (found == true)
                     {
                        studentNames[pos] = "";
                        studentAges[pos] = 0;
                        matricMarks[pos] = 0;
                        fscMarks[pos] = 0;
                        ecatMarks[pos] = 0;
                        choice1[pos] = "";
                        choice2[pos] = "";
                        choice3[pos] = "";

                        cout << "Deleted Successfully";
                     }
                     else
                     {
                        cout << "Record Not Found";
                     }
                  }

                  else if (adminMenu == "6")
                  {
                     break;
                  }

                  else
                  {
                     cout << "Wrong Option";
                  }

                  getch();
               }

               break;
            }
            else
            {
               cout << "Invalid Username or Password";
               getch();
            }
         }
      }

      else if (mainChoice == "2")
      {
         system("cls");

         cout << "Enter Name : ";
         string name;
         cin >> name;

         cout << "Enter Age : ";
         int age;
         cin >> age;

         cout << "Enter Matric : ";
         float mat;
         cin >> mat;

         cout << "Enter FSC : ";
         float fsc;
         cin >> fsc;

         cout << "Enter ECAT : ";
         float ec;
         cin >> ec;

         cout << "Enter Pref1 : ";
         string p1;
         cin >> p1;

         cout << "Enter Pref2 : ";
         string p2;
         cin >> p2;

         cout << "Enter Pref3 : ";
         string p3;
         cin >> p3;

         studentNames[totalStudents] = name;
         studentAges[totalStudents] = age;
         matricMarks[totalStudents] = mat;
         fscMarks[totalStudents] = fsc;
         ecatMarks[totalStudents] = ec;
         choice1[totalStudents] = p1;
         choice2[totalStudents] = p2;
         choice3[totalStudents] = p3;

         totalStudents++;

         cout << "Data Saved Successfully";
         getch();
      }

      else if (mainChoice == "3")
      {
         break;
      }

      else
      {
         cout << "Invalid Option";
         getch();
      }
   }

   cout << "Thanks For Using This Program";
}