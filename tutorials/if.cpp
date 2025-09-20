#include <iostream>

// if statement whether the code should or shoudnt do something same as python
// < greater than, > less than, = equal to
// order matters a lot other wise certain things wont print e.g the over 100 thing

int main(){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "You should be dead" << "\n";
    }
    else if(age >= 18){ 
        std::cout << "Welcome to the site" << "\n";
    }
    else if(age < 0){
        std::cout << "You havent been born yet" << "\n";
    }
    else{
        std::cout << "You are not old enough to enter" << "\n";
    }
    
    return 0;
}