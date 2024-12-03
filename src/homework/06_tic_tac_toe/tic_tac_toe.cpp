//cpp
#include "tic_tac_toe.h"

using std::cout;

void TicTacToe::start_game(std::string first_player) {
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) {
    pegs[position - 1] = player;
    if (!game_over()) {
        set_next_player();
    }
}

bool TicTacToe::game_over() {
    if (check_row_win() || check_column_win() || check_diagonal_win()) {
        set_winner();
        return true;
    } else if (check_board_full()) {
        winner = "C"; // Tie
        return true;
    }
    return false;
}

void TicTacToe::display_board() const {
    for (size_t i = 0; i < pegs.size(); i += 3) {
        cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
    }
}

void TicTacToe::clear_board() {
    for (auto &peg : pegs) {
        peg = " ";
    }
}

void TicTacToe::set_next_player() {
    player = (player == "X") ? "O" : "X";
}

bool TicTacToe::check_board_full() {
    for (const auto &peg : pegs) {
        if (peg == " ") {
            return false;
        }
    }
    return true;
}

bool TicTacToe::check_row_win() {
    for (size_t i = 0; i < pegs.size(); i += 3) {
        if (pegs[i] != " " && pegs[i] == pegs[i + 1] && pegs[i] == pegs[i + 2]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_column_win() {
    for (size_t i = 0; i < 3; ++i) {
        if (pegs[i] != " " && pegs[i] == pegs[i + 3] && pegs[i] == pegs[i + 6]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win() {
    return (pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8]) ||
           (pegs[2] != " " && pegs[2] == pegs[4] && pegs[2] == pegs[6]);
}

void TicTacToe::set_winner() {
    winner = player;
}
