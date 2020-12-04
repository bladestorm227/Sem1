#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int mynumbers[5];
    int largest = 0;
    int result;
    int number = 1;

    for (int i = 0; i < 5; i++) {
        cout << "Enter an integer" << endl;
        cin >> mynumbers[i];
        if (mynumbers[i] > largest) {
            largest = mynumbers[i];
            number = i + 1;

        }

    }
    sort(mynumbers, mynumbers + 5);
    cout << "Ascending order is: ";
    for (int i = 0; i < 5; i++)
        cout << mynumbers[i] << " ";
    cout << " " << endl;
    sort(mynumbers, mynumbers + 5, greater<int>());
    cout << "Descending order is ";
    for (int i = 0; i < 5; i++)
        cout << mynumbers[i] << " ";
    cout << " " << endl;
    cout << "The largest number is " << mynumbers[0] << " and the position is " << number << endl;
    return 0;
}
