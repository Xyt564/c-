#include <iostream>

// break = break out of a loop
// continue = skip current iteration / code
// so in this if i use break it stops at 12 but using continue just skips 13 and goes ahead to 14

int main(){

    for(int i = 1; i <= 20; i++){
        if (i == 13 ){
            continue;
        }
        
        std::cout << i << "\n";
    }
    
    return 0;
}