#include <iostream>
#include <string>
using namespace std;

int main()
{
    string testString = "Do you know who loves C++. XX does!";
    string secondString;
    string thirdString;
        cout << "Enter your name please." << endl;
        getline(cin, secondString);
        testString.replace(27, 2, secondString);
        cout << testString << endl;
        cout << "Enter another name." << endl;
        getline(cin, thirdString);
        testString.replace(27, secondString.length(), thirdString);
        cout << testString << endl;
}
