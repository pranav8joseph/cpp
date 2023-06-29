#include <iostream> 
#include <string>
#include <vector>
#include <cmath>

void greetings(){
    std::cout << "Hello! I will be your calculator today. \n" 
              << "Your options are: \n"
              << "Addition using the symbol: +\n"
              << "Subtraction using the symbol: -\n"
              << "Multiplication using the symbol: *\n"
              << "Division using the symbol: /\n"
              << "Do exponents using the symbol: ^\n"
              << "Find the remainder after dividing using the symbol: % (This might not be too accurate)\n" 
            //   add this later --> "Press Q at any time to quit\n"
              << "---------------------------------------------------\n";  
}

void calculations(double num1, double num2, char symbol) {
    double output; 
        if (symbol == '+') {
            output = num1 + num2; 
        } else if (symbol == '-') {
            output = num1 - num2; 
        } else if (symbol == '*') {
            output = num1 * num2; 
        } else if (symbol == '/') {
            output = num1 / num2;
        } else if (symbol == '^') {
            output = pow(num1, num2); 
        } else if (symbol == '%') {
            int num = static_cast<int>(num1); 
            int nums = static_cast<int>(num2);
            output = num % nums; 
        } else {
        std::cout << "invlalid operation" << std::endl; 
        }
    
    std::cout << num1 << symbol << num2 << " = " << output << std::endl;  
}

int main() {
    greetings();
    std::string again = "Y";
    while (again == "Y" || again == "y") {
        double num1; 
        char symbol; 
        double num2;
        std::cin >> num1 >> symbol >> num2;
    // can be added for clarity for the user
    //    std::cout << "Enter the first number: ";
    //     std::cin >> num1;
    //     std::cout << "Enter the operation symbol: ";
    //     std::cin >> symbol;
    //     std::cout << "Enter the second number: ";
    //     std::cin >> num2;

        calculations(num1, num2, symbol); 

        std::cout << "is there anything else you would like to do? Y/N\n"; 
        std::cin >> again;  
    }
        return 0; 
    }