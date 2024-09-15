#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

// 02_expressions_tests.cpp

#include "hwexpressions.h"
#include <cassert>  // For assertions

// Test Case 1: Test Get Sales Tax
void test_get_sales_tax_amount() {
    assert(get_sales_tax_amount(10) == 0.675);  // 10 * 0.0675 = 0.675
    assert(get_sales_tax_amount(20) == 1.35);   // 20 * 0.0675 = 1.35
}

// Test Case 2: Test Get Tip Amount
void test_get_tip_amount() {
    assert(get_tip_amount(20, 0.15) == 3.0);  // 20 * 0.15 = 3.0
    assert(get_tip_amount(20, 0.20) == 4.0);  // 20 * 0.20 = 4.0
}

int main() {
    test_get_sales_tax_amount();
    test_get_tip_amount();

    // Additional test cases can be added here

    return 0;
}
