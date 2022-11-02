#ifndef SUBMISSION_H
#define SUBMISSION_H

#include <iostream>
#include <string>
#include <fstream>

float even_num_average(std::string input_filepath)
{
    std::string output_path {"output.txt"};

    // START YOUR CODE HERE
    // Declare relevant variables
    float sum {0.0};
    int count {0};
    float average;

    // Read the text file
    std::ifstream infile;
    infile.open(input_filepath);

    // Loop through all the values in the file
    int num;
    while (infile)
    {
        infile >> num;

        if ((num % 2) == 0)
        {
            sum = sum + num;
            count = count + 1;
        }
    }

    infile.close();

    average = sum / count;

    // Save the average to a file
    std::ofstream outfile;
    outfile.open(output_path);
    outfile << average;
    outfile.close();

    return average;
    // END YOUR CODE HERE
}

#endif // SUBMISSION_H
