#include <iostream>

int main(){

    double temp;
    std::string unit;

    std::cout << "******** Temperature conversion **********" << "\n";

    std::cout << "F = farhrenheit" << "\n";
    std::cout << "C = celsius" << "\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == "F" || unit == "f"){
        std::cout << "Enter the temperature in celcius";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F";
    }
    else if (unit == "C" || unit == "c"){
        std::cout << "Enter the temperature in farhrenheit" << "\n";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;

        std::cout << "Temperature is: " << temp << "C" << "\n";

    }
    else{
        std::cout << "Please enter a valid letter (C or F)" << "\n";
    }
    
    
    std::cout << "*******************************************" << "\n";
    
    return 0;
}