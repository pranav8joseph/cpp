#include <iostream>

int main() {
double answer;
double n1;
std::cout << "Enter Number 1: ";
std::cin >> n1;
char symbol;
std::cout << "Enter Symbol ";
std::cin >> symbol;
double n2;
std::cout << "Enter Number 2:";
std::cin >> n2;
if (symbol == +) {
    answer = n1 + n2;
}
else if (symbol == -) {
    answer = n1 - n2;
}
else if (symbol == * ) {
    answer = n1 * n2;

}
else if (symbol == / ) {
    answer  = n1 / n2;
}
}