//write include statements

#include <iostream>  // For cin and cout
#include "hwexpressions.h"  // For function prototypes

using namespace std;

int main() {
    // Declare variables
    double meal_amount;
    double tip_rate;
    double tip_amount;
    double tax_amount;
    double total;

    // Prompt user for meal amount
    cout << "Enter meal amount: ";
    cin >> meal_amount;

    // Calculate sales tax
    tax_amount = get_sales_tax_amount(meal_amount);

    // Prompt user for tip rate
    cout << "Enter tip rate (as a decimal): ";
    cin >> tip_rate;

    // Calculate tip amount
    tip_amount = get_tip_amount(meal_amount, tip_rate);

    // Calculate total
    total = meal_amount + tax_amount + tip_amount;

    // Display the receipt
    cout << "Meal Amount:           " << meal_amount << endl;
    cout << "Sales Tax:              " << tax_amount << endl;
    cout << "Tip Amount:            " << tip_amount << endl;
    cout << "Total:                    " << total << endl;

    return 0;
}
