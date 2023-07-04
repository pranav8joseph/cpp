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
        cout << "what would you like to play as? (x/o)\n";
        cin >> player;
        if (player == 'x' || player == 'X') {
            cout << "You are x\n";
            cout << "The computer is o\n";
            cout << "You will go first\n";
            cout << "make sure you don't choose a spot that is already taken or you will loose your turn\n";
            cout << "Enter the number of the space you want to place your piece\n";
        } else if (player == 'o' || player == 'O') {
            cout << "You are o\n";
            cout << "The computer is x\n";
            cout << "The computer will go first\n";
            cout << "make sure you don't choose a spot that is already taken or you will loose your turn\n";
            cout << "Enter the number of the space you want to place your piece\n";
        }
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

void ComputerAsX_offense() {

    // first check for all possible winning spots and if there is one choose it, if not check if the other player is about to win and block them. if not choose a spot that will put you 1 move closer to winning. if not choose a random spot.

    if (board[0] == "x" && board[1] == "x" && board[2] == "3") {
        board[2] = "x"; 
    } else if (board[0] == "x" && board[2] == "x" && board[1] == "2") {
        board[1] = "x";
    } else if (board[1] == "x" && board[2] == "x" && board[0] == "1") {
        board[0] = "x";
    } else if (board[3] == "x" && board[4] == "x" && board[5] == "6") {
        board[5] = "x";
    } else if (board[3] == "x" && board[5] == "x" && board[4] == "5") {
        board[4] = "x";
    } else if (board[4] == "x" && board[5] == "x" && board[3] == "4") {
        board[3] = "x";
    } else if (board[6] == "x" && board[7] == "x" && board[8] == "9") {
        board[8] = "x";
    } else if (board[6] == "x" && board[8] == "x" && board[7] == "8") {
        board[7] = "x";
    } else if (board[7] == "x" && board[8] == "x" && board[6] == "7") {
        board[6] = "x";
    } else if (board[0] == "x" && board[3] == "x" && board[6] == "7") {
        board[6] = "x";
    } else if (board[0] == "x" && board[6] == "x" && board[3] == "4") {
        board[3] = "x";
    } else if (board[3] == "x" && board[6] == "x" && board[0] == "1") {
        board[0] = "x";
    } else if (board[1] == "x" && board[4] == "x" && board[7] == "8") {
        board[7] = "x";
    } else if (board[1] == "x" && board[7] == "x" && board[4] == "5") {
        board[4] = "x";
    } else if (board[4] == "x" && board[7] == "x" && board[1] == "2") {
        board[1] = "x";
    } else if (board[2] == "x" && board[5] == "x" && board[8] == "9") {
        board[8] = "x";
    } else if (board[2] == "x" && board[8] == "x" && board[5] == "6") {
        board[5] = "x";
    } else if (board[5] == "x" && board[8] == "x" && board[2] == "3") {
        board[2] = "x";
    } else if (board[0] == "x" && board[4] == "x" && board[8] == "9") {
        board[8] = "x";
    } else if (board[0] == "x" && board[8] == "x" && board[4] == "5") {
        board[4] = "x";
    } else if (board[4] == "x" && board[8] == "x" && board[0] == "1") {
        board[0] = "x";
    } else if (board[2] == "x" && board[4] == "x" && board[6] == "7") {
        board[6] = "x";
    } else if (board[2] == "x" && board[6] == "x" && board[4] == "5") {
        board[4] = "x";
    } else if (board[4] == "x" && board[6] == "x" && board[2] == "3") {
        board[2] = "x";
    } else if (board[0] == "o" && board[1] == "o" && board[2] == "3") {
        board[2] = "x";
    } else if (board[0] == "o" && board[2] == "o" && board[1] == "2") {
        board[1] = "x";
    } else if (board[1] == "o" && board[2] == "o" && board[0] == "1") {
        board[0] = "x";
    } else if (board[3] == "o" && board[4] == "o" && board[5] == "6") {
        board[5] = "x";
    } else if (board[3] == "o" && board[5] == "o" && board[4] == "5") {
        board[4] = "x";
    } else if (board[4] == "o" && board[5] == "o" && board[3] == "4") {
        board[3] = "x";
    } else if (board[6] == "o" && board[7] == "o" && board[8] == "9") {
        board[8] = "x";
    } else if (board[6] == "o" && board[8] == "o" && board[7] == "8") {
        board[7] = "x";
    } else if (board[7] == "o" && board[8] == "o" && board[6] == "7") {
        board[6] = "x";
    } else if (board[0] == "o" && board[3] == "o" && board[6] == "7") {
        board[6] = "x";
    } else if (board[0] == "o" && board[6] == "o" && board[3] == "4") {
        board[3] = "x";
    } else if (board[3] == "o" && board[6] == "o" && board[0] == "1") {
        board[0] = "x";
    } else if (board[1] == "o" && board[4] == "o" && board[7] == "8") {
        board[7] = "x";
    } else if (board[1] == "o" && board[7] == "o" && board[4] == "5") {
        board[4] = "x";
    } else if (board[4] == "o" && board[7] == "o" && board[1] == "2") {
        board[1] = "x";
    } else if (board[2] == "o" && board[5] == "o" && board[8] == "9") {
        board[8] = "x";
    } else if (board[2] == "o" && board[8] == "o" && board[5] == "6") {
        board[5] = "x";
    } else if (board[5] == "o" && board[8] == "o" && board[2] == "3") {
        board[2] = "x";
    } else if (board[0] == "o" && board[4] == "o" && board[8] == "9") {
        board[8] = "x";
    } else if (board[0] == "o" && board[8] == "o" && board[4] == "5") {
        board[4] = "x";
    } else if (board[4] == "o" && board[8] == "o" && board[0] == "1") {
        board[0] = "x";
    } else if (board[2] == "o" && board[4] == "o" && board[6] == "7") {
        board[6] = "x";
    } else if (board[2] == "o" && board[6] == "o" && board[4] == "5") {
        board[4] = "x";
    } else if (board[4] == "o" && board[6] == "o" && board[2] == "3") {
        board[2] = "x";
    } else if (board[0] == "x" && board[1] == "2" && board[2] == "3") {
        board[1] = "x";
    } else if (board[0] == "1" && board[1] == "x" && board[2] == "3") {
        board[0] = "x"; 
    } else if (board[0] == "1" && board[1] == "2" && board[2] == "x") {
        board[1] == "x";
    } else if (board[3] == "x" && board[4] == "5" && board[5] == "6") {
        board[4] = "x";
    } else if (board[3] == "4" && board[4] == "x" && board[5] == "6") {
        board[3] = "x";
    } else if (board[3] == "4" && board[4] == "5" && board[5] == "x") {
        board[4] = "x";
    } else if (board[6] == "x" && board[7] == "8" && board[8] == "9") {
        board[7] = "x";
    } else if (board[6] == "7" && board[7] == "x" && board[8] == "9") {
        board[6] = "x";
    } else if (board[6] == "7" && board[7] == "8" && board[8] == "x") {
        board[7] = "x";
    } else if (board[0] == "x" && board[3] == "4" && board[6] == "7") {
        board[3] = "x";
    } else if (board[0] == "1" && board[3] == "x" && board[6] == "7") {
        board[0] = "x";
    } else if (board[0] == "1" && board[3] == "4" && board[6] == "x") {
        board[3] = "x";
    } else if (board[1] == "x" && board[4] == "5" && board[7] == "8") {
        board[4] = "x";
    } else if (board[1] == "2" && board[4] == "x" && board[7] == "8") {
        board[1] = "x";
    } else if (board[1] == "2" && board[4] == "5" && board[7] == "x") {
        board[4] = "x";
    } else if (board[2] == "x" && board[5] == "6" && board[8] == "9") {
        board[5] = "x";
    } else if (board[2] == "3" && board[5] == "x" && board[8] == "9") {
        board[2] = "x";
    } else if (board[2] == "3" && board[5] == "6" && board[8] == "x") {
        board[5] = "x";
    } else if (board[0] == "x" && board[4] == "5" && board[8] == "9") {
        board[4] = "x";
    } else if (board[0] == "1" && board[4] == "x" && board[8] == "9") {
        board[0] = "x";
    } else if (board[0] == "1" && board[4] == "5" && board[8] == "x") {
        board[4] = "x";
    } else if (board[2] == "x" && board[4] == "5" && board[6] == "7") {
        board[4] = "x";
    } else if (board[2] == "3" && board[4] == "x" && board[6] == "7") {
        board[2] = "x";
    } else if (board[2] == "3" && board[4] == "5" && board[6] == "x") {
        board[4] = "x";
    } else {
        // choose random spot on the board if that spot is not taken 
        for (int i = 0; i < 9; i++) {
            if (board[i] != "x" && board[i] != "o") {
                board[i] = "x";
                break;
            }
        }
    }
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
    
    
    if (comp == 'n' || comp == 'N') {
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