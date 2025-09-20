#include <iostream>
#include <vector>

// so overly complicated data tpye and the def type make an alias to make to smaller e.g
// typedef std::vector<std::pair<std::string, int>> pairlist_t; 
// make it more readable and less crowded and less errors

typedef std::string text_t; // changes std::string for text_t
typedef int i_t; // changes int for i_t

int main(){

    text_t name = ""; // smaller and easier to type and add ur own name here

    std::cout << name << "\n";

    i_t x = 6;

    std::cout << x << "\n";
    
    return 0;
}
