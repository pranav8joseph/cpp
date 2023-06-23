#include <iostream> 
#include <vector> 
#include <string> 

int main() {

//make vector for all 5 days 
//cycle through the vector with for loop and add 1 each time 
//use parts of the current program to remove people or just leave it 
//i am geenious 

int N; 
char x; 

std::cin >> N; 

std::vector<int> participants = {N, N, N, N, N}; 

std::vector<int> myheadhurts = {}; 

std::vector<std::string> days = {"Day1", "Day2","Day3", "Day4", "Day5"}; 

for (int g = 0; g < N; g++) { 

for (int i = 0; i < days.size() ; i++) {

std::cin >> x;

if (x == 'Y') {

participants[i] = participants[i] + 0; 

}

else if (x == '.' ) { 

participants[i] = participants[i] - 1; 

} 

} 

}

//for (int j = 0; j < days.size(); j++) {

//std::cout << participants[j] << std::endl; 

//}

int max = 0; 

for (int c = 0; c < participants.size(); c++) {

if (participants[c] > max) {

max = participants[c]; 

}

} 

for (int f = 0; f < participants.size(); f++) {

if (participants[f] == max) {

myheadhurts.push_back(f); 

}

}

for (int j = 0; j < myheadhurts.size(); j++) {

std::cout << myheadhurts[j] + 1; 

if (j != myheadhurts.size() - 1) {

std::cout << ","; 

}

}

//std::cout << max << std::endl; 

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