#include <iostream>

int main()
{
    // type conversion = conversion a value of one data type to another
    //                   implicit = automatic
    //                   expicit = precede value with new data type (type)



    /*
    double x = (int) 3.14;

    std::cout << x;
    */

    //std::cout << (char) 100;

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << "score: " << score;

    return 0;
}