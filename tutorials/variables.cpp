#include <iostream>

// basic variables types only this isnt them all as there is more advanced ones 
                                

int main(){

    // interger (whole number)
    int age = ; // add ur own age
    std::cout << age << "\n"; // "\n" makes a new line appear

    //  double (number including decimal)
    double price = ; // add what price u wish to
    std::cout << price << "\n";

    // char (single character)
    char grade = ''; // needs '' to hold character and add whatever grade u wish
    std::cout << grade << "\n";

    // boolean (True or false)
    bool student = false; // only does true or false 
    bool energy = false; // assuming its used as it is in python
    bool gay = true;

    // string (object that represents a sequence of text)
    std::string name = ""; // requires "" to hold the text and add ur own name
    std::cout << name << "\n";

    std::string message = "you're a batty boy"; // can be any length
    std::cout << message << "\n";

    // string name with text like python print(f"")
    std::cout << "hello " << name << "\n"; 
    // at the "hello " remember space is needed for proper spacing in text

    // another way to use it easier than python lowkey
    std::cout << "you are " << age << " years old" << "\n";
    // remember the spacing its important or the text will look weird
    
    return 0;
}
