#include <iostream>


int main(void){

    std::string name;
    int age;
    double price = 10.99;
    char grade;
    bool student = true;
    
    std::cout << "What is your name: ";
    getline(std::cin, name);

    std::cout << "What is your age: ";
    std::cin >> age;

    std::cout << "What is your grade?: ";
    std::cin >> grade;

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old" << "\n";

    if (student == true){
        std::cout << "You are a student" << "\n";
    }
    else{
        std::cout << "You are not a student" << "\n";
    }
    
    std::cout << "Your grade is " << grade << "\n";
    std::cout << "The price is £" << price << "\n";

    return 0;
}

