#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;

int main()
{
    int myNumbers[10];

    for (int i = 0; i < 10; i++)
        myNumbers[i] = i;
        

    cout << "Array Element" << setw(17) << "Stored Value" << endl;

    for (int i = 0; i < 10; i++)
        cout << setw(7) << i << setw(17) << myNumbers[i] << endl;

    return 0;
}
