#include <iostream>
#include <vector>
//typedef = reserved keyword used to create an additional name
//          (alias) for another data type.
//          New identifier for an existing type
//          Helps with readability and reduces typos.
//          Use when there is a clear benefit.
//          Replace with 'using' (works better with templates)




using text_t = std::string;
using number_t = int;

int main()
{
    //pairlist_t pairlist;
    text_t firstname = "Himanshu";
    number_t age = 18;

    std::cout << firstname << std::endl;
    std::cout << age;

    return 0;
}