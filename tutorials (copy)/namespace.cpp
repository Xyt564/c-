#include <iostream>

// namespace first make it so i can change the number of int x
namespace first{
    int x = 7;
} 

namespace second{
    int x = 18;
}
int main(){

    // can also use "using namespace first;" which would then default to that
    // out put of that would be 7 since u called the first namespace


    int x = 5; // basic but if u wanna change the number u gotta use namespace

    std::cout << first::x << "\n"; // gets 7 so it called the first one
    std::cout << second::x << "\n"; // gets 18 since it called the second name space
    std::cout << x << "\n"; // gets 5 cuz it defaults to the one in main with exact name e.g second::x
    
    return 0;
}