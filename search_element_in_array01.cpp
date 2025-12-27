#include<iostream>

int searcharray(std::string array[], int size, std::string choice);

int main()
{
    std::string foods[] = {"pizza", "paneer", "pav bhaji", "burger", "aloo paratha"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string choice;

    std::cout << "Enter a food to search: ";
    std::getline(std::cin, choice);

    index = searcharray(foods, size, choice);

    if(index != -1)
    {
        std::cout << choice << " is found at index " << index;
    }
    else
    {
        std::cout << choice << " is not available in the array";
    }

    return 0;
}

int searcharray(std::string array[], int size, std::string choice)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == choice)
        {
            return i;
        }
    }
    return -1;
}