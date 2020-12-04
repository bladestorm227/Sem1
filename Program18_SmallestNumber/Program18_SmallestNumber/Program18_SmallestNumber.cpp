#include <iostream>
using namespace std;

int smallestNumber(int a, int b)
{
    if (a > b) {
        cout << b << " is the smallest";
            return b;
    }
    else if (b > a)
    {
        cout << a << " is the smallest";
            return a;
    }
    else
    {
        cout << "They are both equal ";
            return a;
    }
}

int main()
{
    int firstnumber;
    int secondnumber;
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter a number" << endl;
        cin >> firstnumber;
        cout << "Enter another number" << endl;
        cin >> secondnumber;

        smallestNumber(firstnumber, secondnumber);
        cout << "" << endl;
    }
    
    
}

