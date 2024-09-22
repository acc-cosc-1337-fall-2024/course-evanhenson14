//write include statements


#include "decisions.h"
using std::string;

int main() 
{
    int grade;
    
    std::cout << "Enter a numerical grade: ";
    std::cin >> grade;

    std::cout << "Letter grade using if-else: " 
             << get_letter_grade_using_if(grade) << std::endl;
    std::cout << "Letter grade using switch: " 
              << get_letter_grade_using_switch(grade) << std::endl;

    return 0;
}
