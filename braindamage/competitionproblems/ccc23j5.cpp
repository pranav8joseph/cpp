#include <iostream> 
#include <string> 
#include <cstring> 

using namespace std;

// int* insertX(int n, int arr[], 
//             int x, int pos) 
// { 
//     int l; 
 
//     // increase the size by 1 
//     n++; 
 
//     // shift elements forward 
//     for (i = n; i >= pos; i--) 
//         arr[i] = arr[i - 1]; 
 
//     // insert x at pos 
//     arr[pos - 1] = x; 
 
//     return arr; 
// } 
int n; 
int d;
int pos;

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
    
    char board[R][C*2];
    char board2[R][C];
    // Storing user input in the array
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> board[i][j];
            // Add a space between characters
            board[i][j+1] = ' ';
            }
        }


    // print board
    // for (int i = 0; i < R; i++) {
    //     for (int j = 0; j < C; j++) {
    //         cout << "board [" << i << "][" << j << "] = " << board[i][j] << endl; 
    //     }
    // }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C * 2; j++) {
            cout << board[i][j];
        }
        cout << endl; 
    }
}