#include <iostream>
#include <vector>

// so overly complicated data tpye and the using make an alias to make to smaller e.g
// using pairlist_t = std::vector<std::pair<std::string, int>>; 
// make it more readable and less crowded and less errors

using text_t = std::string; // changes std::string for text_t
using i_t = int; // changes int for i_t

int main(){

    text_t name = ""; // smaller and easier to type add ur own name

    std::cout << name << "\n";

    i_t x = 6;

    std::cout << x << "\n";
    
    return 0;
}
