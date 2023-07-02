// this will be quite painful to write
// but it will be worth it
// I hope

#include <iostream> 
#include <string>
#include <vector> 

namespace std {
int player1; 
int player2; 
vector<int> players = {player1, player2};
vector<string> board = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
}

namespace std {

void start_game() {
cout << "Lets play some tic tac toe\n"; 
    cout << "Here is the board\n";
    cout << "-----------\n";
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
    cout << "-----------\n";
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
    cout << "-----------\n";
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
    cout << "-----------\n";
    cout << "Player 1 is X and Player 2 is o\n";
    cout << "Player 1 goes first\n";
    cout << "Enter the number of the space you want to place your piece\n";
    cout << "Player 1: ";
}

void player1_update_board() {
    cin >> player1; 
    if (board[player1 - 1] != "x" || board[player1 - 1] != "o") {
        board[player1 - 1] = "x";
    } else {
        cout << "this spot is already taken"; 
    }

    cout << "Here is the updated board\n";
    cout << "-----------\n";
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
    cout << "-----------\n";
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
    cout << "-----------\n";
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
    cout << "-----------\n";
}

void player1_update_board() {
    cin >> player1; 
    if (board[player1 - 1] != "x" || board[player1 - 1] != "o") {
        board[player1 - 1] = "x";
    } else {
        cout << "this spot is already taken"; 
    }

    cout << "Here is the updated board\n";
    cout << "-----------\n";
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
    cout << "-----------\n";
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
    cout << "-----------\n";
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
    cout << "-----------\n";
}

void player1_update_board() {
    cin >> player2; 
    if (board[player2 - 1] != "x" || board[player2 - 1] != "o") {
        board[player2 - 1] = "x";
    } else {
        cout << "this spot is already taken"; 
    }

    cout << "Here is the updated board\n";
    cout << "-----------\n";
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
    cout << "-----------\n";
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
    cout << "-----------\n";
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
    cout << "-----------\n";
}

int main() {
    start_game(); 
    player1_update_board(); 
}


} 


// ignore this

    // if (player1 == 1) {
    //     cout << "-----------\n";
    //     cout << " X | 2 | 3 \n";
    //     cout << "-----------\n";
    //     cout << " 4 | 5 | 6 \n";
    //     cout << "-----------\n";
    //     cout << " 7 | 8 | 9 \n";
    //     cout << "-----------\n";
    // } else if (player1 == 2) {
    //     cout << "-----------\n";
    //     cout << " 1 | X | 3 \n";
    //     cout << "-----------\n";
    //     cout << " 4 | 5 | 6 \n";
    //     cout << "-----------\n";
    //     cout << " 7 | 8 | 9 \n";
    //     cout << "-----------\n";
    // } else if (player1 == 3) {
    //     cout << "-----------\n";
    //     cout << " 1 | 2 | X \n";
    //     cout << "-----------\n";
    //     cout << " 4 | 5 | 6 \n";
    //     cout << "-----------\n";
    //     cout << " 7 | 8 | 9 \n";
    //     cout << "-----------\n";
    // }else if (player1 == 4) {
    //     cout << "-----------\n";
    //     cout << " 1 | 2 | 3 \n";
    //     cout << "-----------\n";
    //     cout << " X | 5 | 6 \n";
    //     cout << "-----------\n";
    //     cout << " 7 | 8 | 9 \n";
    //     cout << "-----------\n";
    // } else if (player1 == 5) {
    //     cout << "-----------\n";
    //     cout << " 1 | 2 | 3 \n";
    //     cout << "-----------\n";
    //     cout << " 4 | X | 6 \n";
    //     cout << "-----------\n";
    //     cout << " 7 | 8 | 9 \n";
    //     cout << "-----------\n";
    // } else if (player1 == 6) {
    //     cout << "-----------\n";
    //     cout << " 1 | 2 | 3 \n";
    //     cout << "-----------\n";
    //     cout << " 4 | 5 | X \n";
    //     cout << "-----------\n";
    //     cout << " 7 | 8 | 9 \n";
    //     cout << "-----------\n";
    // }  else if (player1 == 7) {
    //     cout << "-----------\n";
    //     cout << " 1 | 2 | 3 \n";
    //     cout << "-----------\n";
    //     cout << " 4 | 5 | 6 \n";
    //     cout << "-----------\n";
    //     cout << " X | 8 | 9 \n";
    //     cout << "-----------\n";
    // } else if (player1 == 8) {
    //     cout << "-----------\n";
    //     cout << " 1 | 2 | 3 \n";
    //     cout << "-----------\n";
    //     cout << " 4 | 5 | 6 \n";
    //     cout << "-----------\n";
    //     cout << " 7 | X | 9 \n";
    //     cout << "-----------\n";
    // } else if (player1 == 9) {
    //     cout << "-----------\n";
    //     cout << " 1 | 2 | 3 \n";
    //     cout << "-----------\n";
    //     cout << " 4 | 5 | 6 \n";
    //     cout << "-----------\n";
    //     cout << " 7 | 8 | X \n";
    //     cout << "-----------\n";
    // }