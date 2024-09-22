#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_letter_grade_using_if") {
    REQUIRE(get_letter_grade_using_if(95) == "A");
    REQUIRE(get_letter_grade_using_if(85) == "B");
    REQUIRE(get_letter_grade_using_if(75) == "C");
    REQUIRE(get_letter_grade_using_if(65) == "D");
    REQUIRE(get_letter_grade_using_if(55) == "F");
    REQUIRE(get_letter_grade_using_if(105) == "Invalid Grade");
    REQUIRE(get_letter_grade_using_if(-5) == "Invalid Grade");
}

TEST_CASE("Verify get_letter_grade_using_switch") {
    REQUIRE(get_letter_grade_using_switch(94) == "A");
    REQUIRE(get_letter_grade_using_switch(88) == "B");
    REQUIRE(get_letter_grade_using_switch(78) == "C");
    REQUIRE(get_letter_grade_using_switch(61) == "D");
    REQUIRE(get_letter_grade_using_switch(52) == "F");
    REQUIRE(get_letter_grade_using_switch(101) == "Invalid Grade");
    REQUIRE(get_letter_grade_using_switch(-10) == "Invalid Grade");
}