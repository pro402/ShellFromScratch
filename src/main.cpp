#include <iostream>

int main(){
    std::cout<<"$ ";
    std::string input;
    // we will treat every command as invalid here except exit for loop
    while(getline(std::cin, input)){
        if(input != "exit") {
            if(input!="") std::cout<<input<<": command not found"<<std::endl;
            std::cout<<"$ ";
        }
        else break;
    }
}