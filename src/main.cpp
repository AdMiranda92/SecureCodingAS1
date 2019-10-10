//main file for testing git tracking

#include <iostream>
#include <string>
#include <bitset>

#define MESSAGE std::cout << "message text here for failure" << std::endl

int main(){
    std::string testing = std::bitset<32>(200).to_string();
    std::cout << testing << std::endl;
    if(0 | 0){
        std::cout << "TRUE \n";
    }
    MESSAGE;
    return 0;
}