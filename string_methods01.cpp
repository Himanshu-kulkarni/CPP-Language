#include<iostream>

int main()
{
    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin >> std::ws, name);

    //std::cout << name.at(0);

    name.insert(0, "@");
    std::cout << name << std::endl;

    std::cout << "space is at index " << name.find(" ") << std::endl;

    std::cout << name.erase(0, 4);



    return 0;
}