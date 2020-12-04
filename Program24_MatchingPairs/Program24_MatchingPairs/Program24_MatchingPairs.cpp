#include <iostream>
using namespace std;

char boardCards[10] = { 'A', 'B', 'C', 'D', 'E', 'A', 'B', 'C', 'D', 'E' };
bool cardsFound[10] = { false };
int attempt = 0;

void draw();
void drawingBoard(int a, int b);

int main()
{
    int score = 0;
    bool playing = true;
    draw();
    while (playing) {
        int firstGuess, secondGuess;
        cout << "Select a Card" << endl;
        cin >> firstGuess;
        cout << "Select another Card" << endl;
        cin >> secondGuess;
        drawingBoard(firstGuess, secondGuess);
        if (boardCards[firstGuess - 1] == boardCards[secondGuess - 1]) {
            score++;
            cardsFound[firstGuess - 1] = true;
            cardsFound[secondGuess - 1] = true;

            cout << "Match found" << endl;
        }
        else {
            cout << "No match found" << endl;
        }
        if (score == 5) {
            cout << "You have won!";
            playing = false;
        }
        else { attempt++; }
    }
}

void draw() {
    system("cls");
    cout << "Your total attempts is " << attempt << endl;
    for (int i = 0; i < 10; i++) {
        if (cardsFound[i])
            cout << "[" << boardCards[i] << "]";
        else cout << "[" << i + 1 << "]";

        if (i == 4) { cout << endl; }
    }

    cout << endl;
    
}

void drawingBoard(int a, int b) {
    system("cls");
    cout << "Your total attempts is " << attempt << endl;
    for (int i = 0; i < 10; i++) {
        if (cardsFound[i] || ((i + 1 == a) || (i + 1 == b))) {
            cout << "[" << boardCards[i] << "]";
        }
        else
            cout << "[" << i + 1 << "]";

        if (i == 4) { cout << endl; }
    }
    
    cout << endl;

}