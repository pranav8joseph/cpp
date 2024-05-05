#include <iostream> 
#include <string> 

using namespace std;

string W;
int R;
int C; 
int H;

int main() {
 
    cin >> W; 

    // check if word is longer than 2 letters if not return 0
    if (W.length() < 2) {
        return 0; 
    }

    // take rows number
    cin >> R;

    // take columns number
    cin >> C;
    
    string board[R][C];
    // Storing user input in the array
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> board[i][j];
        }
    }

    //iterate to find word
    // check rows
    int l = 0; 
    int l2 = 0; 
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C - W.length(); j++) {
            // check going right
            bool check = true; 
            for (int d = 0; d < W.length(); d++) {
                if (board[i][j+d][0] != W.at(d)) {
                    check = false; 
                    break; 
                } 
            }
        }
    }
    //check going left
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (board[i][j][0] == W.at(W.length()-1)) {
                for(int t = 0; t < W.length(); t++) {
                    if (board[i][j+t][0] == W.at(W.length()-1-t)) {
                        l2 += 1; 
                    }
                }
            }
        }
    }
// add amount of times the word showed up
    if (l == W.length()) {
        H += (l/W.length()); 
    }

    if (l2 == W.length()) {
        H += (l2/W.length()); 
    }

// (Completed) FINISH NEXT """""""""""" (same technique as rows checker)
    int q = 0; 
    int q2 = 0; 
// check columns 
    for (int j = 0; j < C; j++) {
        for (int i = 0; i < R; i++) {
            // check going right
            if (board[i][j][0] == W.at(0)) {
                for (int d = 1; d < W.length(); d++) {
                    if (board[i+d][j][0] == W.at(d)) {
                        l += 1; 
                    } 
                }
            } 
        }
    }
    //check going left
    for (int j = 0; j < C; j++) {
        for (int i = 0; i < R; i++) {
            if (board[i][j][0] == W.at(W.length()-1)) {
                for(int t = 0; t < W.length(); t++) {
                    if (board[i+t][j][0] == W.at(W.length()-1-t)) {
                        l2 += 1; 
                    }
                }
            }
        }
    }

    // add amount of times the word showed up
    if (q == W.length()) {
        H += (q/W.length()); 
    }

    if (q2 == W.length()) {
        H += (q2/W.length()); 
    }

    // RIGHT ANGLE SWITCHES DO THIS AFTER COLUMN CHECKER """"""
    // for (int i = 0; i < C; i++) {
    //     for (int j = 0; j < R; j++) {
    //         if (board)
    //     }
    // }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << board[i][j] << ' ';
        }
    cout << endl; 
    }

    cout << H << endl; 
}

// F T R U B L K
// P M N A X C U
// A E R C N E O
// M N E U A R M
// M U N E M N S