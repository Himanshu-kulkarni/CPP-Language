#include<iostream>

int main()
{
    std:: string name;
    int age;

    std::cout << "Enter your age";
    std::cin >> age;

    std::cout << "Type your full name:";
    std::getline(std::cin >> std:: ws, name); // std:: ws is for eating the newline character
                                              // made up by the std::getline function.

    std::cout << name << std::endl;
    std::cout << "You are "<< age << " years old";
    return 0;
}