//cpp
#include "decision.h"

std::string get_letter_grade_using_if(int grade)
{
    std::string letter_grade;

    if (grade >= 90 && grade <= 100)
    {
        letter_grade = "Your grade is an A!";
    }
    else if (grade >= 80 && grade <= 89)
    {
        letter_grade = "Your grade is a B!";
    }
    else if (grade >= 70 && grade <= 79)
    {
        letter_grade = "Your grade is a C!";
    }
    else if (grade >= 60 && grade <= 69)
    {
        letter_grade = "Your grade is a D!";
    }
    else if (grade >= 0 && grade <= 59)
    {
        letter_grade = "Your grade is an F!";
    }
    return letter_grade;
}

std::string get_letter_grade_using_switch(int grade)
{
    std::string letter_grade;
    int tens = grade / 10;
    switch(tens)
    {
        case 10:
            letter_grade = 'You got an A!';
            break;
        case 9:
            letter_grade = 'You got an A!';
            break;
        case 8:
            letter_grade = 'You got a B!';
            break;
        case 7:
            letter_grade = 'You got a C!';
            break;
        case 6:
            letter_grade = 'You got a D!';
            break;
        default:
            letter_grade = 'You got an F!';
            break;
    }
    return letter_grade;
}