#include <iostream>
#include "VaultUtils.cpp"

using namespace  std;

int main() {
    std::cout << "Welcome to SecureValut" << std::endl;
    if(isValutPresent()) {
        std::cout << "Vault found, please authenticate:" << std::endl;
    }else{
        cout<<"Vault missing! creating new one"<<endl;
        if(createVault() == 0){
            cout<<"vault creation successful"<<endl;
        }else{
            cout<<"vault creation unsuccessful"<<endl;
        }
    }

    return 0;
}









//class Driver{
//
//     Driver(){
//        std::cout<<"You are in trying to access secureValut"<<std::endl;
//    }
//
//    static int main(){
//        std::cout<<"You are in main method of Driver method"<<std::endl;
//        return 0;
//    }
//};