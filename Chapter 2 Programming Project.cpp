// Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //need variables for each year as integers and the rate the ocean rises as a double
    double fiveYear, sevenYear, tenYear;
    double riseRate;
    //initializing each variable
    riseRate = 1.5;
    fiveYear = 5 * riseRate;
    sevenYear = 7 * riseRate;
    tenYear = 10 * riseRate;
    std::cout << "In five years, the ocean level has risen " << fiveYear << "mm." << endl;
    std::cout << "In seven years, the ocean level has risen " << sevenYear << "mm." << endl;
    std::cout << "In ten years, the ocean level has risen " << tenYear << "mm." << endl;
}

