#include<iostream>

int main()
{
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    std::cout << "Enter the food you like or enter q to quit " << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter choice " << i + 1 << ": ";
        std::getline(std::cin, temp);

        if(temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }


    std::cout << std::endl << "The food you like is: " << "\n";
    /*for(std::string food : foods)
    {
        std::cout << food << '\n';
    }*/

    for(int i = 0; !foods[i].empty(); i++)
    {
        std::cout << foods[i] << std::endl ;
    }

    return 0;
}