

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"
#include "tic_tac_toe_manager.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Test manager tracks winners correctly") {
    TicTacToeManager manager;

    TicTacToe game1;
    game1.start_game("X");
    game1.mark_board(1);
    game1.mark_board(4);
    game1.mark_board(2);
    game1.mark_board(5);
    game1.mark_board(3); // X wins
    REQUIRE(game1.game_over());
    manager.save_game(game1);

    TicTacToe game2;
    game2.start_game("O");
    game2.mark_board(1);
    game2.mark_board(2);
    game2.mark_board(4);
    game2.mark_board(5);
    game2.mark_board(7); // O wins
    REQUIRE(game2.game_over());
    manager.save_game(game2);

    TicTacToe game3;
    game3.start_game("X");
    game3.mark_board(1);
    game3.mark_board(2);
    game3.mark_board(3);
    game3.mark_board(4);
    game3.mark_board(5);
    game3.mark_board(6);
    game3.mark_board(7);
    game3.mark_board(8);
    game3.mark_board(9); // Tie
    REQUIRE(game3.game_over());
    manager.save_game(game3);

    int x_wins, o_wins, ties;
    manager.get_winner_total(x_wins, o_wins, ties);

    REQUIRE(x_wins == 1);
    REQUIRE(o_wins == 1);
    REQUIRE(ties == 1);
}
