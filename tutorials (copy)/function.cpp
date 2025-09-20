#include <iostream>

// function = reusable block of code
// either declare before hand e.g
// void happy birthday() and then write code under main func
// or just put it above as i did
// dont forget code is read top to bottom

void Happybirthday(std::string name, int age){ // needed to call in variable from other funcs
    std::cout << "Happy birthday to " << name << "\n";
    std::cout << "Happy birthday to you " << name << "\n";
    std::cout << "Happy birthday dear " << name << "\n";
    std::cout << "Happy birthday to you " << name << "\n";
    std::cout << "You are now " << age << " years old " << name << "\n";
}

int main(){

    std::string name = ""; // write ur name here 
    int age = ; // write ur age here

    Happybirthday(name, age); // need to tell the other func the variable
    return 0;
}
