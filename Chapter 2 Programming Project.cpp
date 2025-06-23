// Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //Defining variables
    int customers, oneOrMore, citrusFlavored;
    //Initializing variables
    customers = 16500; //Total number of Customers surveyed
    oneOrMore = 15; //Percent of people who purchace one or more drinks per week
    citrusFlavored = 58; //Percent of people who prefer citrus-flavored energy drinks
    //Calculating how many people make up each percentage
    double oneOrMorePer = (customers * oneOrMore) / 100;
    double citrusFlavoredPer = (customers * citrusFlavored) / 100;
    //Outputting Results
    std::cout << "Approximately " << oneOrMorePer << " of their customers surveyed purchace one or more energy drinks per week." << endl;
    std::cout << "Approximately " << citrusFlavoredPer << " of their customers surveyed prefer citrus - flavored energy drinks." << endl;
}

