// this will be quite painful to write
// but it will be worth it
// I hope

#include <iostream> 
#include <string>
#include <vector> 
#include <cstdlib>

namespace std {

int player1; 
int player2; 
vector<int> players = {player1, player2};
vector<std::string> board = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};

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
    cout << "Player 1 is x and Player 2 is o\n";
    cout << "Player 1 goes first\n";
    cout << "make sure you don't choose a spot that is already taken or you will loose your turn\n";
    cout << "Enter the number of the space you want to place your piece\n";
}

void player1_update_board() {
    cout << "Player 1: ";
    cin >> player1; 
    if (board[player1 - 1] != "x" && board[player1 - 1] != "o") {
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

void player2_update_board() {
    cout << "Player 2: ";
    cin >> player2; 
    if (board[player2 - 1] != "x" && board[player2 - 1] != "o") {
        board[player2 - 1] = "o";
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

void check_for_winner() {
    if (board[0] == "x" && board[1] == "x" && board[2] == "x") {
        cout << "Player 1 wins" << endl; 
        exit(0); 
    } else if (board[3] == "x" && board[4] == "x" && board[5] == "x") {
        cout << "Player 1 wins" << endl;
        exit(0);
    } else if (board[6] == "x" && board[7] == "x" && board[8] == "x") {
        cout << "Player 1 wins" << endl;
        exit(0);
    } else if (board[0] == "x" && board[3] == "x" && board[6] == "x") {
        cout << "Player 1 wins" << endl;
        exit(0);
    } else if (board[1] == "x" && board[4] == "x" && board[7] == "x") {
        cout << "Player 1 wins" << endl;
        exit(0);
    } else if (board[2] == "x" && board[5] == "x" && board[8] == "x") {
        cout << "Player 1 wins" << endl;
        exit(0);
    } else if (board[0] == "x" && board[4] == "x" && board[8] == "x") {
        cout << "Player 1 wins" << endl;
        exit(0);
    } else if (board[2] == "x" && board[4] == "x" && board[6] == "x") {
        cout << "Player 1 wins" << endl;
        exit(0);
    } else if (board[0] == "o" && board[1] == "o" && board[2] == "o") {
        cout << "Player 2 wins" << endl;
        exit(0);
    } else if (board[3] == "o" && board[4] == "o" && board[5] == "o") {
        cout << "Player 2 wins" << endl;
        exit(0);
    } else if (board[6] == "o" && board[7] == "o" && board[8] == "o") {
        cout << "Player 2 wins" << endl;
        exit(0);
    } else if (board[0] == "o" && board[3] == "o" && board[6] == "o") {
        cout << "Player 2 wins" << endl;
        exit(0);
    } else if (board[1] == "o" && board[4] == "o" && board[7] == "o") {
        cout << "Player 2 wins" << endl;
        exit(0);
    } else if (board[2] == "o" && board[5] == "o" && board[8] == "o") {
        cout << "Player 2 wins" << endl;
        exit(0);
    } else if (board[0] == "o" && board[4] == "o" && board[8] == "o") {
        cout << "Player 2 wins" << endl;
        exit(0);
    } else if (board[2] == "o" && board[4] == "o" && board[6] == "o") {
        cout << "Player 2 wins" << endl;
        exit(0);
    } else if (board[0] != "1" && board[1] != "2" && board[2] != "3" && board[3] != "4" && board[4] != "5" && board[5] != "6" && board[6] != "7" && board[7] != "8" && board[8] != "9") {
        cout << "It's a tie" << endl;
        exit(0);
    }
}
}

int main() {
// start game
    std::start_game();
    
    for (int i = 0; i < 4; i++) {
    std::player1_update_board(); 
    std::check_for_winner(); 
    std::player2_update_board(); 
    std::check_for_winner();
}

// 5th turn for x 
    std::player1_update_board();
    std::check_for_winner();

    return 0;
} 




























 
// // 1st turn
//     std::player1_update_board(); 
//     std::check_for_winner(); 
//     std::player2_update_board(); 
//     std::check_for_winner();
// // 2nd turn
//     std::player1_update_board(); 
//     std::check_for_winner(); 
//     std::player2_update_board(); 
//     std::check_for_winner();
// // 3rd turn
//     std::player1_update_board(); 
//     std::check_for_winner(); 
//     std::player2_update_board(); 
//     std::check_for_winner();
// // 4th turn
//     std::player1_update_board(); 
//     std::check_for_winner(); 
//     std::player2_update_board(); 
//     std::check_for_winner();






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
    //