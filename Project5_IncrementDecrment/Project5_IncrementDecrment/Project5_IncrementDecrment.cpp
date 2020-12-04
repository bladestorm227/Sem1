// Project5_IncrementDecrment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    cout << "num = " << num << endl;
    cout << "Increment Operator before num = " << ++num << endl;
    cout << "num after = " << num << endl;

    num = 1;

    cout << "num ="  << num << endl;
    cout << "Increment Operator after num = " << num++ << endl;
    cout << "num after = " << num << endl;

    num = 1;

    cout << "num = " << num << endl;
    cout << "Decrement Operator after num = " << --num << endl;
    cout << "num after = " << num << endl;

    num = 1;

    cout << "num = " << num << endl;
    cout << "Decrement Operator after num " << num-- << endl;
    cout << "num after = " << num << endl;

    return 0;
}

