#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string choice;
    vector<string> inventory = { "sword" };
    int secondChoice;
    while (inventory.size() < 3) {
        cout << "Type which item you wish to keep: Staff or Knife" << endl;
        getline(cin, choice);
        inventory.insert(inventory.begin() + 1, choice);
        cout << "Your inventory holds:" << endl;
        cout << inventory[0] << endl;
        cout << inventory[1] << endl;
        cout << "Type which item you wish to keep: Healing potion or Fire Spell" << endl;
        getline(cin, choice);
        inventory.insert(inventory.begin() + 2, choice);
        cout << "Your inventory holds:" << endl;
        cout << inventory[0] << endl;
        cout << inventory[1] << endl;
        cout << inventory[2] << endl;
    }
        cout << "Your inventory is full!" << endl;
        cout << "You have found a magic ring. What would you like to replace in your inventory?\nChoices:\n1:sword\n2:" << inventory[1] << endl << "3:" << inventory[2] << endl;
        cin >> secondChoice;
        if (secondChoice == 1) {
            inventory.at(0) = "magic ring";
            cout << "Your inventory holds:" << endl;
            cout << inventory[0] << endl;
            cout << inventory[1] << endl;
            cout << inventory[2] << endl;
        }
        else if (secondChoice == 2) {
            inventory.at(1) = "magic ring";
            cout << "Your inventory holds:" << endl;
            cout << inventory[0] << endl;
            cout << inventory[1] << endl;
            cout << inventory[2] << endl;
        }
        else if (secondChoice == 3) {
            inventory.at(2) = "magic ring";
            cout << "Your inventory holds:" << endl;
            cout << inventory[0] << endl;
            cout << inventory[1] << endl;
            cout << inventory[2] << endl;
        }
        inventory.clear();
        if (inventory.empty()) {
            cout << "You have been robbed!\nInventory is now:\nEmpty!" << endl;
        }
}
