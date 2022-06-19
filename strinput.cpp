#include <iostream>
#include <string>

int main() {
    std::string text = "what is your name:";
    std::string name;

    std::cout <<text<<std::endl;

    getline(std::cin ,name);

    std::cout<<"Hello "<<name<<std::endl;

    
    return 0;
}
