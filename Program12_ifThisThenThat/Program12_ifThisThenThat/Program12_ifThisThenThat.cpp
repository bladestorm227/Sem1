#include <iostream>
using namespace std;

int main()
{
    int rain = 1;
    int snow = 2;
    int answer;
    int answer2;
    
    cout << "Is it raining, 1, or snowing, 2," << endl;
    cin >> answer;

    switch (answer)
    {
    case 1:
        cout << "It is raining. What is the temperature? ";
        break;

    case 2:
        cout << "It is snowing. What is the temperature? ";
        break;
    }

    cin >> answer2;
    if (answer == 1)
    {
        if (answer2 > 15)
        {
            cout << "Take a light coat" << endl;
        }
        else
        {
            cout << "Take a thick coat" << endl;
        }
    }
    else if (answer == 2)
    {
        if (answer2 > 5)
        {
            cout << "Wear something warm" << endl;
        }
        else
        {
            cout << "Wrap up well or stay at home" << endl;
        }
    }
    return 0;
}
