#include<iostream>

// const keyword specifies that a variable's value is constant
// tells the compiler to prevent anything from modifying it
// it is read only

int main()
{
    const double PI = 3.14;
    double radius = 30;
    double circumference = 2 * PI * radius;

    std::cout << circumference;

    return 0;
}