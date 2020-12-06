//
// Created by avinash bondalapati on 11/19/20.
//
#include <iostream>
#include <string>
#include <cstdio>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
bool getUserName(){
    cout<<"enter  your username : ";
    char username[32];
    cin.getline(username, sizeof(username));
    cout<<"entered username is :"<<username<<endl;
    return true;
}

bool getUserPassword(){
    cout<<"Setup your password: ";
    string password;
    getline(cin,password);
    cout<<"Password creation successful"<<endl;
    return true;
}

std::string exec(const char* cmd) {
    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}

bool authenticate(){
    string password;
    char hash[65];
    cout<<"Enter your password to access valut"<<endl;
    cin >> password;
    string command = "echo \"" + password + "\" | shasum -a 256";
    system(command.c_str());
    FILE * fp;
    fp = popen(command.c_str(), "r");
    if (fp == NULL){
        cout<<"Error encountered"<<endl;
    }
    fgets(hash, 65, fp);
    cout<<"found hash is "<<hash<<endl;
    int status = pclose(fp);
    if (status == 0){
//        return matchHash(hash);
    }else{
        cout<<"Error encountered"<<endl;
    }



//    cout<<result<<endl;


}

bool getUserDetails(){
    return getUserName() && getUserPassword() && true;
}
