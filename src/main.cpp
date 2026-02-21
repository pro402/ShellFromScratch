#include <iostream>
#include <string>

void checkEcho(std::string input){}

int main(){
    std::cout<<"$ ";
    std::string input;
    // we will treat every command as invalid here except exit for loop
    while(getline(std::cin, input)){
        if(input != "exit") {
            // input manager
            std::size_t pos_echo = input.find("echo ");
            if(pos_echo != std::string::npos){
                std::string args = input.substr(pos_echo+5);
                std::cout<<args<<std::endl;
                std::cout<<"$ ";
                continue;
            }
            else if(input == "") {
                std::cout<<"$ ";
                continue;
            }
            else {
                std::cout<<input<<": command not found"<<std::endl;
                std::cout<<"$ ";
            }
        }
        else break;
    }
}