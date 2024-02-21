#include <iostream> 
#include <string> 
#include <vector> 

int main() {

    std::string instructions; 
    std::cin >> instructions; 

    for (int i = 0; i < instructions.length(); i++) {

        if (instructions[i] == '+') {

            instructions.replace(i, i, " tighten ");

        } else if (instructions[i] == '-') {
            instructions.replace(i, i, " loosen ");
        } else {

        }
    }

    

}