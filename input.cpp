#include <iostream>
int main(){

   

    std::string name;
    std::cout << "What is your name?: ";
    std::cin >> name;

    int age;
    std::cout << "How old are you?: ";
    std::cin >> age;

    std::string fullName;
    std::cout << "Waht is your full name?: ";
    std::getline(std::cin >> std::ws, fullName);


    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old!" << '\n';
    std::cout << "Hello " << fullName << '\n';
    return 0;
}