#include <iostream>
#include "submission.h"

int main()
{
    //TEST YOUR CODE HERE BY CALLING THE FUNCTION
    // Test Scenarios
    // input1.txt ---> output = 17
    std::cout << even_num_average("sample_input1.txt") << std::endl;

    // input2.txt ---> output = 25.333
    std::cout << even_num_average("sample_input2.txt") << std::endl;

    // input3.txt ---> output = 478.02941
    std::cout << even_num_average("sample_input3.txt") << std::endl;

    return 0;
}
