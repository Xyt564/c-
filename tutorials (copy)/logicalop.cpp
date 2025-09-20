#include <iostream>

// && = check if two conditions are true
// || = checks if at least one is true
// ! = reverses the logical state of its operand
// examples below 

int main(){

    // int temp;
    bool sunny;

    // std::cout << "Enter the temperature: ";
    // std::cin >> temp;

    // if(temp > 0 && temp < 30){
    //    std::cout << "The Temperature is good!!!" << "\n";
    // }
    // else{
    //   std::cout << "The temperature is bad!" << "\n";
    // }

    // if(temp <= 0 || temp >= 30){
    //   std::cout << "The Temperature is bad!!!" << "\n"; 
    // }
    // else{
    //    std::cout << "The temperature is good!!!" << "\n";
    // }

    sunny = true;
    if(!sunny){
        std::cout << "It is cloudy outside!!" << "\n";
    }
    else{
        std::cout << "it is sunny outside" << "\n";
    }



    return 0;
}