#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string sentence;
    int position;
    cout << "Enter a sentence." << endl;
    getline(cin, sentence);
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == 'e') {
            sentence.replace(i, 1, "X");
        }
    }
    cout << sentence << endl;
}
