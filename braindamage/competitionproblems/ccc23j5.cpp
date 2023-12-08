#include <iostream> 
#include <string> 

using namespace std;

int main() {

    string W; 
    cin >> W; 

    // check if word is longer than 2 letters if not return 0
    if (size(W) < 2) {
        return 0; 
    }

    // take rows number
    int R;
    cin >> R;

    // take columns number
    int C; 
    cin >> C;
    
    char board[R][C];
    // Storing user input in the array
     for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> board[i][j];
        }
    }


    // print board
    // for (int i = 0; i < R; i++) {
    //     for (int j = 0; j < C; j++) {
    //         cout << "board [" << i << "][" << j << "] = " << board[i][j] << endl; 
    //     }
    // }

     for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << board[i][j] << ' ';
        }
        cout << endl; 
    }
}

// F T R U B L K
// P M N A X C U
// A E R C N E O
// M N E U A R M
// M U N E M N S