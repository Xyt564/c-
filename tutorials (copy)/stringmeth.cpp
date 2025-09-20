#include <iostream>

// just remove the // and run whatever u want to can be confusing (if needed just ask chatgpt)
int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // used for text since it can get spaces and stuff slightly better than std::cin

    // if(name.empty()){ // finds if the text is empty
    //    std::cout << "You did not enter a name" << "\n";
    // }
    // else{
    //    std::cout << "Hello " << name << "\n";
    // }
    
    
    // if (name.length() > 12){ // name.length finds the name of the string e.g name in this code
    // std::cout << "Your name cannot be longer than 12 letters" << "\n";
    // }
    // else{
    //    std::cout << "Hello " << name << "\n";
    // }
    
    // name.clear(); // clears text in the string

    // name.append("@gmail.com"); // adds text to a string e.g the name
    
    // std::cout << "Your username is now " << name << "\n";
    
    // std::cout << name.at(10) << "\n"; // changes the letter to a single letter so in my case 0 is a and 1 is b and so and so
    
    // name.insert(0, "@"); // add text at a certain place like 0."@" would add an @ at the start
    
    // std::cout << name << "\n";

    // std::cout << name.find("a") << "\n"; // looks for any white space or gaps using the .find()
// also for the .find dont forget it finds the number where it is e.g i put a so thats zero

    name.erase(0, 1); // it just erases certain letter so 0, 1 for abdul erases the A

    std::cout << "hello " << name << "\n";


    return 0;
}
