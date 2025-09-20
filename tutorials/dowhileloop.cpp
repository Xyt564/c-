#include <iostream>

// a do while loop is when u run some code and do it and if a condition is true it keeps going
// to put it in my words it basically runs the app and if u didnt do the rigth thing it makes you do it again
// like in this if i put a negative number it asks for a number again

int main(){

    int number;

    do{ // and it needs a do here 
    std::cout << "Enter a positive number: ";
    std::cin >> number;
}while (number < 0); // for a do while loop its just put at the end like this

    std::cout << "The # is " << number << "\n";
    
    
    return 0;
}