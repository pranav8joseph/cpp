#include <iostream> 
#include <string>
#include <vector> 

int main() {

    int N;

    std::vector<int> scored = {};
    std::vector<int> fouls = {};
    std::vector<int> star_total = {}; 

    std::cin >> N; 
    

    for (int i = 0; i < N; i++) { 
        int s; 
        int f; 
        std::cin >> s; 
        std::cin >> f; 

        scored.push_back(s*5); 
        fouls.push_back(f*3); 
    }

    for (int i = 0; i < N; i++) {
        star_total.push_back(scored[i]-fouls[i]); 
    }

    int players = 0; 

    for (int i = 0; i < N; i++) {
        if (star_total[i] > 40) {
            players += 1;
        } 
    }

    if (players == N) {
        std::cout << players << "+\n"; 
    } else {
        std::cout << players << std::endl; 
    }

}