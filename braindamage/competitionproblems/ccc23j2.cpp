#include <iostream> 
#include <vector> 
#include <string> 

int main() {

int N; 
int Poblano = 1500;
int Mirasol = 6000; 
int Serrano = 15500; 
int Cayenne = 40000; 
int Thai = 75000; 
int Habanero = 125000; 
std::vector<std::string> Peppers = {"Poblano", "Mirasol", "Serrano", "Cayenne", "Thai", "Habanero"}; 
std::string x; 
int T = 0; 

std::cin >> N; 

for (int i = 0; i < N; i++) { 

std::cin >> x;

if (x == Peppers[0]) { 

T = T + Poblano; 

} else if (x == Peppers[1]) { 

T = T + Mirasol; 

} else if (x == Peppers[2]) { 

T = T + Serrano; 

} else if (x == Peppers[3]) { 

T = T + Cayenne; 

} else if (x == Peppers[4]) { 

T = T + Thai; 

} else if (x == Peppers[5]) { 

T = T + Habanero; 

}

}

std::cout << T << std::endl; 

}