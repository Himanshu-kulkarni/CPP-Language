#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main()
{
    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as namespaces are different.
    using namespace first;

    std::cout << x << std::endl;
    std::cout << second::x << std::endl;

    return 0;
}