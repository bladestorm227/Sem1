#include <iostream>
using namespace std;

int main()
{

    int playerInput;
    cout << "Please choose an option: 1.Sunny 2.Cloudy 3.Raining 4.Exit" <<endl;
    cin >> playerInput;

    switch (playerInput)
    {
    case 1:

        cout << "Don't forget your sunscreen";

        break;

    case 2:

        cout << "Watch out if it rains";

        break;

    case 3:

        cout << "Don't forget your rain coat";

        break;

    case 4:
        cout << "Goodbye";
        break;
        
    default:

        cout << "That is not an option";


    }
}

