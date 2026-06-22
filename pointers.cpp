#include<iostream>

int main()
{
    //pointers = variable that stores an memory address of another variable.
    //           sometimes it's easier to work with an address.

    // & address of operator
    // * dereference operator

    std::string name = "Himanshu";
    int age = 18 ;
    std::string pizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};

    std::string *pname = &name;
    int *page = &age;
    std::string *Ppizzas = pizzas;

    std::cout << *pname<< std::endl;
    std::cout << *page << std::endl;
    std::cout << *Ppizzas;

    

    return 0;
}