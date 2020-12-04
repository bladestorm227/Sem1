#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

void name(string& rStr);

int main()
{
    string userName;
    cout << "Enter a username." << endl;
    getline(cin, userName);
    cout << "Username has already been taken!" << endl;
    name(userName);
    cout << "Try this username " << userName << endl;
}

void name(string& rStr) {
    srand(time(NULL));
    int num = rand();
    rStr += to_string(num);
}