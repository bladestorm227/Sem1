// Program4_userDefinedVars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    typedef int cost;
    enum CarMake
    {
        FORD = 1,
        FIAT,
        TESLA,
        VW,
        BMW,
        ASTONMARTIN,
        HONDA,
        NISSAN,
        TOYOTA,
        AUDI,
        JAGUAR,
        DODGE

    };

    cost price = 13000;
    CarMake brand = HONDA;
    
    cout << "The cost of my car is: " << price << endl;
    cout << "My car id is " << brand << endl;

    return 0;
}

