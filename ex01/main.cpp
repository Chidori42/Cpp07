#include "iter.hpp"
#include <vector>

void print_func(std::string i){
    std::cout << i << std::endl;
}
int main( void ) {
    std::string v[2] = {"abc", "ppp"};
    iter(v, 2, print_func);
    return 0;
}