#include <iostream>

// A nested loop is just a loop inside a loop

int main(){

    for(int i = 1; i <= 3; i++){ // makes the count down repeat it self 3 times
        for(int j = 1; j <= 10; j++){ // creates a countdown from 1 to ten
        std::cout << j << " " << "\n";

    }
    std::cout << "\n"; // makes a new line each time the countdown restarts
    }
    
    
    return 0;
}