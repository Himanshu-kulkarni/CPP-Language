#include<iostream>

// Ternary operator ?: = replacement for the if/else statement.
//                       condition? experession1 : expression2;

int main()
{
    int grade = 50;
    grade >=60 ? std::cout << "You pass!!" : std::cout << "You fail!!";

    return 0;
}