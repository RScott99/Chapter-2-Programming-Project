// Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //Need variables for each year and the rate the ocean rises as doubles
    double fiveYear, sevenYear, tenYear;
    double riseRate;
    //Initializing the rate the ocean rises each year
    riseRate = 1.5;
    //Calculating how high the ocean will rise after each year
    fiveYear = 5 * riseRate;
    sevenYear = 7 * riseRate;
    tenYear = 10 * riseRate;
    //Outputting the results in three seperate lines
    std::cout << "In five years, the ocean level has risen by approximately " << fiveYear << "mm." << endl;
    std::cout << "In seven years, the ocean level has risen by approximately " << sevenYear << "mm." << endl;
    std::cout << "In ten years, the ocean level has risen by approximately " << tenYear << "mm." << endl;
}

