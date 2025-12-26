#include<iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std:: string name;
    int age;

    std::cout << "What is your name? :";
    std::cin >> name;

    std::cout << "What's your age? :";
    std::cin >> age;

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << "Years old.";

    return 0;
}