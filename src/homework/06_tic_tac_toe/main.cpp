//main
#include "tic_tac_toe.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main() {
    TicTacToe game;
    string first_player;
    char user_choice;

    do {
        cout << "Enter first player (X or O): ";
        cin >> first_player;

        while (first_player != "X" && first_player != "O") {
            cout << "Invalid input! Enter X or O: ";
            cin >> first_player;
        }

        game.start_game(first_player);

        int position;

        while (!game.game_over()) {
            game.display_board();
            cout << "Enter a position (1-9): ";
            cin >> position;

            while (position < 1 || position > 9 || game.get_player() == " ") {
                cout << "Invalid position. Choose another (1-9): ";
                cin >> position;
            }

            game.mark_board(position);
        }

        game.display_board();
        cout << "Game over! Winner: " << game.get_winner() << "\n";

        cout << "Play again? Enter y or Y to continue, or any other key to quit: ";
        cin >> user_choice;

    } while (user_choice == 'y' || user_choice == 'Y');

    return 0;
}
