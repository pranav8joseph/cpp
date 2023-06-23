#include <iostream>
#include <vector> 

int main() {
    
    int sum_even = 0; 
    int product_odd = 1; 

    std::vector<int> vector {2, 4, 3, 6, 1, 9}; 

    for (int i = 0; i < vector.size(); i++) {

if (vector[i] % 2 == 0) { 

sum_even = sum_even + vector[i]; 

} else { 

product_odd = product_odd * vector[i]; 

}

    }

std::cout << "sum of even is: " << sum_even << std::endl; 
std::cout << "product of odd is: " << product_odd << std::endl; 
} 