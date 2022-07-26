#include <iostream>

int main(){

    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverse the logical state of its operand.

    int temp;
    std::cout << "Enter the tempreture: ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30){
        std::cout << "The tempreture is bad!\n";
    } else{
        std::cout << "The tempreture is good!\n";
    }

    bool sunny = false;

    if(!sunny){
        std::cout << "It is cloudy outside!";

    }else{
        std::cout << "It is sunny outside!";
    }

    return 0;
}