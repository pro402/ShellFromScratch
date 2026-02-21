#include <iostream>

int main(){
    std::cout<<"$ ";
    std::string input;
    while(getline(std::cin, input)){
        if(input != "exit") std::cout<<"$ ";
        else break;
    }
}