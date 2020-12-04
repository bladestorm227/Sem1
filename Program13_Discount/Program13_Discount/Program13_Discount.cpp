#include <iostream>
using namespace std;

int main()
{
    char status;
    int choice;

    cout << "Please tell me your status with 's' for student, 't' for teacher and 'o' for other" << endl;

    cin >> status;
    
    cout << "What game would you like?" << endl;

    cin >> choice;

    if ((status == 's' || status == 't') && choice == 1) {

        cout << "You can get a 20% discount" << endl;
    }
    else if ((status == 't' || status == 's') && choice == 2) {

        cout << "You can get a 10% discount" << endl;
    }
    else
    {
        cout << "You are not entitled to a discount" << endl;
    }

    return 0;
}
