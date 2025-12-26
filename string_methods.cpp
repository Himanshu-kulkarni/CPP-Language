#include<iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std:: ws, name);

    if(name.length() > 12)
    {
        std::cout << "Name cannot be more than 12 characters!!";
    }
    else if(name.empty())
    {
        std::cout << "You did not enter your name";
    }
    else
    {
        std::cout << "Welcome" << std::endl;
        //name.clear();
        //std::cout << "hello" << name;

        name.append("@gmail.com");
        std::cout << "Your user name is now : " << name;
    }
    
    return 0;
}