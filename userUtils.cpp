//
// Created by avinash bondalapati on 11/19/20.
//
#include <iostream>
#include <string>

using namespace std;
bool getUserName(){
    cout<<"enter  your username"<<endl;
    char username[32];
    cin.getline(username, sizeof(username));
    cout<<"entered username is :"<<username<<endl;
    return true;
}

bool getUserPassword(){
    cout<<"Setup your password"<<endl;
    string password;
    getline(cin,password);
    cout<<"Password creation successful"<<endl;
    return true;
}

bool getUserDetails(){
    return getUserName() && getUserPassword() && true;
}
