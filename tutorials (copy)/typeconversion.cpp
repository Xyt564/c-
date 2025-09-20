#include <iostream>

// type conversion = conversion of a value of one data tpye to another
// implicit = automatic
// explicit = precede value with new data type(manually set by user)

int main(){

    double x = (int) 3.14; // (int) is the conversion

    std::cout << x << "\n";

    char y = 100; // implicit auto converts it to letter so 100 = d

    std::cout << y << "\n";

    std::cout << (char) 110 << "\n"; // manual conversion so this is explicit and gives n

// example usage

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100; // makes it double to keep the decimal so the divsion works correctly

    std::cout << score << "%";

    return 0;
}