#include <iostream>
using namespace std;

int main()
{
    char name[256] = " ";
    cout << "Enter your initials." << endl;
    cin.getline(name,256);
    for (int i = 0; i < 256; i++) {
        if (name[i] != char(32)) {
            cout << name[i] <<endl;
        }
        if (name[i] == 0) {
            break;
        }
    }
}
