#include <iostream> 

int main() { 

int P;
int C;
int F = 0; 

    //std::cout << "how many packages did you deliver?: "; 
std::cin >> P;
    //std::cout << "how mnay times have you hit an object?: "; 
std::cin >> C; 

if (P > C) {

F = F + 500; 

} else {

F = F + 0;

}

P = P * 50; 
C = C * 10; 
F = F + P; 
F = F - C; 

std::cout << F << std::endl; 

}

// Write me a function that will add 2 numbers together
