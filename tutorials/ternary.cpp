#include <iostream>

// ternary operator ?: = replacement to an if/else statement
// a bit longer on the screen but also pretty much the same as if statement just use a : to split them

int main(){

    int grade = 75;

    std::cout << "what is your grade?: ";
    std::cin >> grade;

    grade >= 60 ? std::cout << "you pass!" << "\n" : std::cout << "you fail" << "\n";
       
    return 0;
}