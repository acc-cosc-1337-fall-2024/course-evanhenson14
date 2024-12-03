//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe b) {
    games.push_back(b); // Save game to history
    update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int& x, int& o, int& ties) const {
    x = x_win;
    o = o_win;
    ties = this->ties;
}

void TicTacToeManager::update_winner_count(const std::string& winner) {
    if (winner == "X") {
        x_win++;
    } else if (winner == "O") {
        o_win++;
    } else {
        ties++;
    }
}
