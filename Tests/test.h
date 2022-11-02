#ifndef TEST_H
#define TEST_H

#include <string>
#include <fstream>
#include <cstdio>
#include "../submission.h"

float test_code(std::string path)
{
    even_num_average(path);

    float average;
    std::ifstream infile;
    infile.open("output.txt");
    infile >> average;
    infile.close();

    remove("output.txt");

    return average;
}


#endif // TEST_H
