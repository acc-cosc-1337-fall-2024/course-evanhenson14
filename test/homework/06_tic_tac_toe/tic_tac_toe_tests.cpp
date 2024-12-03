

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test row win condition") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(1);
    game.mark_board(4);
    game.mark_board(2);
    game.mark_board(5);
    game.mark_board(3);
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test column win condition") {
    TicTacToe game;
    game.start_game("O");
    game.mark_board(1);
    game.mark_board(2);
    game.mark_board(4);
    game.mark_board(5);
    game.mark_board(7);
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "O");
}

TEST_CASE("Test diagonal win condition") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(1);
    game.mark_board(2);
    game.mark_board(5);
    game.mark_board(3);
    game.mark_board(9);
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test tie condition") {
    TicTacToe game;
    game.start_game("X");
    game.mark_board(1);
    game.mark_board(2);
    game.mark_board(3);
    game.mark_board(5);
    game.mark_board(4);
    game.mark_board(6);
    game.mark_board(8);
    game.mark_board(7);
    game.mark_board(9);
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "C"); // Tie
}