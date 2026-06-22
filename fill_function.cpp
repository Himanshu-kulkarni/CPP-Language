#include<iostream>

int main()
{
    // fill() = fills a range of elements with a specified value
    //          fill(begin, end, value)

    const int SIZE = 9;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "paneer");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "batata");
    fill(foods + (SIZE/3)*2, foods + SIZE, "tamata");

    for(std::string food : foods)
    {
        std::cout << food << "\n";
    }

    return 0;
}