// this will be quite painful to write
// but it will be worth it
// I hope

#include <iostream> 
#include <string>
#include <vector> 
#include <cstdlib>

char player; 
int player1; 
int player2; 
char comp; 
std::vector<std::string> board = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
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
    cout << "Would you like to play against the computer? (Y/N)\n";
    cin >> comp; 
    if (comp == 'y' || comp == 'Y') {
        cout << "You will play against the computer\n";
    } else if (comp == 'n' || comp == 'N'){
    cout << "If not you will play against another player\n";
    cout << "Player 1 is x and Player 2 is o\n";
    cout << "Player 1 goes first\n";
    cout << "make sure you don't choose a spot that is already taken or you will loose your turn\n";
    cout << "Enter the number of the space you want to place your piece\n";
}
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

void check_for_winner_2players() {
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


// play against computer stuff 

void computerAsX() {
    vector<vector<int>> winningCombos = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
    
    vector<int> availableMoves;
    for (int i = 0; i < board.size(); i++) {
        if (board[i] != "x" && board[i] != "o") {
            availableMoves.push_back(i);
        }
    }

    // Check if the computer can win
    for (const auto& combo : winningCombos) {
        int count = 0;
        int emptyIndex = -1;
        for (int index : combo) {
            if (board[index] == "x") {
                count++;
            } else if (board[index] != "o") {
                emptyIndex = index;
            }
        }
        if (count == 2 && emptyIndex != -1) {
            board[emptyIndex] = "x";
            return;
        }
    }

    // Check if the player is about to win and block their move
    for (const auto& combo : winningCombos) {
        int count = 0;
        int emptyIndex = -1;
        for (int index : combo) {
            if (board[index] == "o") {
                count++;
            } else if (board[index] != "x") {
                emptyIndex = index;
            }
        }
        if (count == 2 && emptyIndex != -1) {
            board[emptyIndex] = "x";
            return;
        }
    }

    // If neither winning nor blocking move is possible, make a random move
    int randomIndex = rand() % availableMoves.size();
    int move = availableMoves[randomIndex];
    board[move] = "x";
}

void computerAsO() {
    vector<vector<int>> winningCombos = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};

    vector<int> availableMoves;
    for (int i = 0; i < board.size(); i++) {
        if (board[i] != "x" && board[i] != "o") {
            availableMoves.push_back(i);
        }
    }

    // Check if the computer can win
    for (const auto& combo : winningCombos) {
        int count = 0;
        int emptyIndex = -1;
        for (int index : combo) {
            if (board[index] == "o") {
                count++;
            } else if (board[index] != "x") {
                emptyIndex = index;
            }
        }
        if (count == 2 && emptyIndex != -1) {
            board[emptyIndex] = "o";
            return;
        }
    }

    // Check if the player is about to win and block their move
    for (const auto& combo : winningCombos) {
        int count = 0;
        int emptyIndex = -1;
        for (int index : combo) {
            if (board[index] == "x") {
                count++;
            } else if (board[index] != "o") {
                emptyIndex = index;
            }
        }
        if (count == 2 && emptyIndex != -1) {
            board[emptyIndex] = "o";
            return;
        }
    }

    // If neither winning nor blocking move is possible, make a random move
    int randomIndex = rand() % availableMoves.size();
    int move = availableMoves[randomIndex];
    board[move] = "o";
}


void check_for_winner_computer() {
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
        cout << "Computer wins" << endl;
        exit(0);
    } else if (board[3] == "o" && board[4] == "o" && board[5] == "o") {
        cout << "Computer wins" << endl;
        exit(0);
    } else if (board[6] == "o" && board[7] == "o" && board[8] == "o") {
        cout << "Computer wins" << endl;
        exit(0);
    } else if (board[0] == "o" && board[3] == "o" && board[6] == "o") {
        cout << "Computer wins" << endl;
        exit(0);
    } else if (board[1] == "o" && board[4] == "o" && board[7] == "o") {
        cout << "Computer wins" << endl;
        exit(0);
    } else if (board[2] == "o" && board[5] == "o" && board[8] == "o") {
        cout << "Computer wins" << endl;
        exit(0);
    } else if (board[0] == "o" && board[4] == "o" && board[8] == "o") {
        cout << "Computer wins" << endl;
        exit(0);
    } else if (board[2] == "o" && board[4] == "o" && board[6] == "o") {
        cout << "Computer wins" << endl;
        exit(0); 
    } else if (board[0] != " " && board[1] != " " && board[2] != " " && board[3] != " " && board[4] != " " && board[5] != " " && board[6] != " " && board[7] != " " && board[8] != " ") {
    cout << "It's a tie" << endl;
    exit(0);
    }
}
// play against computer stuff ends here 

}
int main() {
// start game
    std::start_game();
    
    if (comp == 'y' || comp == 'Y') {
        std::cout << "which player would you like to be? (x or o)" << std::endl; 
        std::cin >> player;
        if (player == 'x' || player == 'X') {
            std::cout << "You are player 1" << std::endl;
            std::cout << "Computer is player 2" << std::endl;

        for (int i = 0; i < 4; i++) {
            std::player1_update_board(); 
            std::check_for_winner_computer();
            std::computerAsO(); 
            std::check_for_winner_computer();
            }

        // 5th turn for x 
        std::player1_update_board();
        std::check_for_winner_computer();

        } else if (player == 'o' || player == 'O') {
            std::cout << "You are player 2" << std::endl;
            std::cout << "Computer is player 1" << std::endl;
        
        for (int i = 0; i < 4; i++) { 
            std::computerAsX(); 
            std::check_for_winner_computer();
            std::player2_update_board(); 
            std::check_for_winner_computer();
            }
        }

    } else if (comp == 'n' || comp == 'N') {
    for (int i = 0; i < 4; i++) {
    std::player1_update_board(); 
    std::check_for_winner_2players(); 
    std::player2_update_board(); 
    std::check_for_winner_2players();
    }
    // 5th turn for x 
    std::player1_update_board();
    std::check_for_winner_2players();
    }

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