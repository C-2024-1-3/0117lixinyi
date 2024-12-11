#include <iostream> 

int main() { 
    int i, j, * pi, * pj; 
    pi = &i; 
    pj = &j; 
    i = 5; j = 7; 
    std::cout << i << '\t' << j << '\t' << pi << '\t' << pj << '\n'; 
    std::cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j << '\n'; 
    return 0; 
}