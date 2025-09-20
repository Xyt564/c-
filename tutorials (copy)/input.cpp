#include <iostream>

// cout (insetion operation) (basically print())
// cin (exrraction operation) (basically input())
// remember placement matters keep vars together and question together for cleaner output on terminal

int main(){

    std::string name; // basic string
    int age; // setting age variable

    std::cout << "What is your name?: "; // setting the question
    std::getline(std::cin, name); 
// can be used for sentences or stuff with spaces and the std::ws remove any white space to make sure it works fine

    // std::cin >> name; used to store the name basically cin is input

    std::cout << "What is your age?: "; // setting question

    std::cin >> age; // >> is for input << for output

    std::cout << "Hello " << name << "\n";

    std::cout << "You are " << age << " years old" << "\n";
    
    
    return 0;
}
