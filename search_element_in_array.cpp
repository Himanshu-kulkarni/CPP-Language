#include<iostream>

int searcharray(int array[], int size, int choice);

int main()
{
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int choice;

    std::cout << "Enter a number to search: ";
    std::cin >> choice;

    index = searcharray(numbers, size, choice);

    if(index != -1)
    {
        std::cout << "The number "<< choice << " is found at index " << index;
    }
    else
    {
        std::cout << choice << " is not available in the array";
    }

    return 0;
}

int searcharray(int array[], int size, int choice)
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