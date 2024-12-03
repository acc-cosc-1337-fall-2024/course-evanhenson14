//main
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main() {
    TicTacToeManager manager;
    string first_player;
    char user_choice;

    do {
        TicTacToe game;
        cout << "Enter first player (X or O): ";
        cin >> first_player;

        while (first_player != "X" && first_player != "O") {
            cout << "Invalid input! Enter X or O: ";
            cin >> first_player;
        }

        game.start_game(first_player);

        while (!game.game_over()) {
            cout << game;
            cin >> game; // Use overloaded istream operator
        }

        cout << game; // Use overloaded ostream operator
        cout << "Game over! Winner: " << game.get_winner() << "\n";

        manager.save_game(game); // Save game to manager

        int x_wins, o_wins, ties;
        manager.get_winner_total(x_wins, o_wins, ties);

        cout << "Scores:\n";
        cout << "X wins: " << x_wins << "\n";
        cout << "O wins: " << o_wins << "\n";
        cout << "Ties: " << ties << "\n";

        cout << "Play again? Enter y or Y to continue, or any other key to quit: ";
        cin >> user_choice;

    } while (user_choice == 'y' || user_choice == 'Y');

    return 0;
}

