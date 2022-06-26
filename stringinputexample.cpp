#include <iostream>
#include <string>

int main() {
    std:: string text = "What is your age?";
    std::string name;

    std::cout << text << std::endl;
    getline(std::cin ,name);

    std::cout<<"My age is "<<name<<std::endl;


    std:: string text2 = "And what is your current coding language?";
    std::string name2;

    std::cout << text2 << std::endl;
    getline(std::cin ,name2);

    std::cout<<"My current coding language is "<<name2<<std::endl;


    std:: string text3 = "Are you a beginer or a trained coder?";
    std::string name3;

    std::cout << text3 <<std::endl;
    getline(std::cin ,name3);

    std::cout<<"I am a  "<<name3<<std::endl;


    return 0;

}
