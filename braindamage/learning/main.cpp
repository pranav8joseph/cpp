#include <iostream>
#include <string> 

using namespace std;

int main() {

    int H; 

    string W; 
    cin >> W; 
    
    int R; 
    cin >> R; 

    int C;
    cin >> C; 

    if (1 > C || C > 100) {
        return 0; 
        }
    if (1 > R || R > 100) {
        return 0; 
    }

    cin.ignore(); 

string board;

for (int i = 0; i < R; i++) {
    string board;
    getline(cin, board);
}
    // Iterate through the board
    while (board.find(W) != string::npos) {
        board.find(W); 
        H++;
        }

cout << H << endl;
    return 0;

}