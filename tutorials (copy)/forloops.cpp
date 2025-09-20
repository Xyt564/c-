#include <iostream>

// a for loop is a chain of code and it makes the block of code run in a sepcific ammount of times
// int index makes the variable
// index <= decides how many times it runs 
// index++ is incrementing it 
// so in this it makes the happy new year run three times
// to increase the ammount of times run just change the index <= 3 cuz that means is either greater than or equal to and thats how many times it will run
// the index++ adds one if u wanna add more then for example index+=2 would go up in twos
// for(int index 1 = 10; index>= 0; 1--) this would run a coutdown from ten to 0 then say happy new years

int main(){

    for (int index = 1; index <= 3; index++){
        std::cout << "HAPPY NEW YEAR!!!" << "\n";
    }
    
    
    return 0;
}