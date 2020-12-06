//
// Created by avinash bondalapati on 11/19/20.
//
#include <fstream>
#include "userUtils.cpp"

bool is_file_exist(const char *fileName)
{
    std::ifstream infile(fileName);
    return infile.good();
}

bool isVaultPresent(){
    return is_file_exist("temp_1GB_file");
}

bool createBinaryFile(){
    system("dd if=/dev/zero of=temp_1GB_file bs=1 count=0 seek=1g >> log.txt");
    if(is_file_exist("temp_1GB_file")){
        cout<<"file created"<<endl;
    }else{
        cout<<"file creation failed"<<endl;
    }
    return true;
}

int createVault(){
    if(!isVaultPresent()){
        if(createBinaryFile()){
            cout<<"Enter the following User Details"<<endl;
        }else{
            cout<<"Vault file creation failed try again!!"<<endl;
        }
        if(!getUserDetails())
            cout<<"Invalid UserDetails, Please try again!!"<<endl;
        else
            cout<<"Vault creation successful"<<endl;
    }else{
        cout<<"vault located"<<endl;
    }

    return 0;
}