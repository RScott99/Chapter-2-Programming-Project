// Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //Defining variables
    int tank;
    double tMpg, hMpg; //tmpg = town miles per gallon, hmpg = highway miles per gallon
    double tDist, hDist; //tDist = tow distance, hDist = highway distance
    //Initializing the tank capacity and gas efficiency
    tank = 20;
    tMpg = 23.5;
    hMpg = 28.9;
    //Calculating distance for both conditions
    tDist = tank * tMpg;
    hDist = tank * hMpg;
    //Output distances
    std::cout << "In town, the car can travel " << tDist << " miles on one tank." << endl;
    std::cout << "On the highway, the car can travel " << hDist << " miles on one tank." << endl;
}

