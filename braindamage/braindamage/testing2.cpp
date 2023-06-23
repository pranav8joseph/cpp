#include <iostream> 
#include <vector> 
#include <string> 

int main() {

int N; 
char x; 

std::cin >> N; 

std::vector<int> c = {}; 
std::vector<char> comma = {}; 
//use this and write if statement whether or not to write another comma L

for (int i = 0; i < N; i++) {

std::cin >> x; 

c.push_back(x); 

if (i < N - 1) {

comma.push_back(','); 

}

}

for (int j = 0; j < N; j++) {

std::cout << comma[j - 1] << c[j]; 

} 

}

//std::vector<int> c = {}; 
//std::vector<char> comma = {}; 
//use this and write if statement whether or not to write another comma 

//for (int i = 0; i < N; i++) {

//std::cin >> x; 

//c.push_back(x); 

//if (i < N - 1) {

//comma.push_back(','); 

//}

//}

//for (int j = 0; j < N; j++) {

//std::cout << comma[j - 1] << c[j]; 

//} 