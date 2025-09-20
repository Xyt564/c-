#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter side a: ";
    std::cin >> a;

    std::cout << "Enter side b: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    // c = sqrt(pow(a,2) + pow(b,2)); // for the same answer just in less lines
    
    std::cout << "Side c: "<< c << "\n";

    return 0;
}