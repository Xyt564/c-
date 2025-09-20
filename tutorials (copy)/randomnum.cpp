#include <iostream>
#include <ctime>

// pseudo-random = not truly randomn (but close)

int main(){

    srand(time(NULL)); // create the rand func

    int number = (rand() % 6) + 1; // give you no higher than 6 cuz % 6 is the modulus
// only went to 5 before so by adding the plus 1 it goes fully to 6 now
    std::cout << "The random number is " << number << "\n";
    
    return 0;
}