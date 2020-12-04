#include <iostream>
using namespace std;

int main()
{
    const int MAX_ITEMS = 4;
    int numItems = 0;
    string inventory[MAX_ITEMS];
    inventory[numItems++] = "sword";
    inventory[numItems++] = "battle axe";
    inventory[numItems++] = "healing potion";
    inventory[numItems++] = "dagger";
    char choice;

    cout << "You have found a wizard's staff but your inventory is full. Would you like to replace the dagger? (y or n)" << endl;
    cin >> choice;
    if (choice == 'y') {
        inventory[3] = "wizard's staff";
        for (int i = 0; i < 4; i++)
            cout << inventory[i] << " " << endl;
    }
    if (choice == 'n') {
        cout << "You have left the staff" << endl;
        for (int i = 0; i < 4; i++)
            cout << inventory[i] << " " << endl;
    }
}

