#include<iostream>
using namespace std;
int main(){
int number1, number2;
char operation;
int result;
cout << "Enter First Number: ";
cin>>number1;
cout << "Enter operation: ";
cin>>operation;
cout <<"Enter second number: ";
cin>>number2;
if (operation == '+'){
    result = number1 - number2;
     cout <<"Inverse result is: "<<result<<endl;
}
else if (operation == '-'){
    result = number1 + number2;
     cout <<"Inverse result is: "<<result<<endl;
}
else if (operation == '*'){
    result = number1/number2;
    cout <<"Inverse result is: "<<result<<endl;
}
else if (operation == '/'){
    result = number1 * number2;
     cout <<"Inverse result is: "<<result<<endl;
}
}