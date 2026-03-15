#include<iostream>
using namespace std;
int main(){
    string my_password, user_enter;
    my_password = "!User$$3";
    cout <<"Enter your Password: ";
    cin>>user_enter;
    if(user_enter == my_password){
        cout <<"wow you cracked the code";
    }
    else{
        cout << "Wrong password";
    }
    return 0;
}