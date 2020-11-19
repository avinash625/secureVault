//
// Created by avinash bondalapati on 11/19/20.
//
#include "userUtils.cpp"

bool isVaultPresent(){
    return false;
}

int createVault(){
    if(!isVaultPresent()){
        if(!getUserDetails())
            cout<<"Invalid UserDetails, Please try again!!"<<endl;
        else
            cout<<"Vault creation successful"<<endl;
    }else{
        cout<<"vault located"<<endl;
    }

    return 0;
}