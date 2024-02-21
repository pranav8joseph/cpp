#include <iostream> 
#include <string.h> 
#include <vector> 

int main() {

    int R; 
    int S; 

    int total_kids = 28;
    int total_cupcakes;

    std::cin >> R; 
    std::cin >> S; 

    while (R < 0 or S < 0) {
        std::cin >> R; 
        std::cin >> S;

        if (R != 0 or R < 0 or S != 0 or S < 0) {
            break;
        }
    }

    total_cupcakes = R * 8; 
    total_cupcakes += (S * 3); 
    
    std::cout << total_cupcakes - 28 << std::endl; 

}