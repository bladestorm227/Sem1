#include <iostream>
using namespace std;

int main()
{
    int usernumbers[10];
    int smallest = 100000;
    int number;

    for (int i = 0; i < 10; i++)
    {
        cout << "Input an integer" << endl;
        cin >> usernumbers[i];

        if (usernumbers[i] < smallest) {
            smallest = usernumbers[i];
            number = i;
            number++;
        }
    }

    cout << "The smallest number is " << smallest << ". The position is " << number << endl;
    
}

