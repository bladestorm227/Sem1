#include <iostream>
using namespace std;

void comma2blank(char* textToChange);

int main()
{
    char text[256];
    cout << "Enter a sentence but instead of using spaces use commas." << endl;
    cin >> text;
    comma2blank(text);
    cout << text << endl;
}

void comma2blank(char* textToChange) {
    while (*textToChange != NULL) {
        if (*textToChange == ',') {
            *textToChange = ' ';
        }
        textToChange++;
    }

}