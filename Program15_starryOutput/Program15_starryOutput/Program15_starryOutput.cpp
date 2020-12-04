#include <iostream>
using namespace std;

int main()
{
    int tempnum;
    char answer = 'y';

    while (answer != 'n')
    {
        cout << "Enter a number between 1 and 10" << endl;
        cin >> tempnum;
        if (tempnum < 11)
        {
            for (int i = 0; i <= tempnum; i++)
            {
                cout << endl;

                for (int j = 0; j < i; j++)
                {
                    cout << "*";

                }
            }
            cout << "" << endl;
            cout << "Would you like another go? y for yes, n for no" << endl;
            cin >> answer;
        }
        else
        {
            cout << "That is not between 1 and 10!" << endl;

        }
        
    }
    cout << "Goodbye!" << endl;

}