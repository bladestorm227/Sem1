#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string lower(string a);

int main()
{
    srand(time(NULL));
    string user;
    int computer ;
    int score = 0;
    int compScore = 0;
    int userLeft = 2;
    int compLeft = 2;
    while (score < 2 && compScore < 2) {
        cout << "Enter your selection:" << endl;
        cin >> user;
        int computer = (rand() % 3 + 1);
        if (computer == 1) {
            cout << "The computer chose: Rock" << endl;
            if (lower(user) == "paper") {
                score++;
                userLeft--;
                cout << "You won!" << endl;
                cout << "Your current score is on " << score << ". You need " << userLeft << " to win" << endl;
                cout << "The computer score is " << compScore << ". It needs " << compLeft << " to win" << endl;
            }
            else if (lower(user) == "rock") {
                cout << "It was a tie." << endl;
                cout << "Your current score is on " << score << ". You need " << userLeft << " to win" << endl;
                cout << "The computer score is " << compScore << ". It needs " << compLeft << " to win" << endl;
            }
            else if (lower(user) == "scissors") {
                compScore++;
                compLeft--;
                cout << "The computer won." << endl;
                cout << "Your current score is on " << score << ". You need " << userLeft << " to win" << endl;
                cout << "The computer score is " << compScore << ". It needs " << compLeft << " to win" << endl;
            }
        }
        else if (computer == 2) {
            cout << "The computer chose: Paper" << endl;
            if (lower(user) == "paper") {
                cout << "It was a tie." << endl;
                cout << "Your current score is on " << score << ". You need " << userLeft << " to win" << endl;
                cout << "The computer score is " << compScore << ". It needs " << compLeft << " to win" << endl;
            }
            else if (lower(user) == "rock") {
                compScore++;
                compLeft--;
                cout << "The computer won." << endl;
                cout << "Your current score is on " << score << ". You need " << userLeft << " to win" << endl;
                cout << "The computer score is " << compScore << ". It needs " << compLeft << " to win" << endl;
            }
            else if (lower(user) == "scissors") {
                score++;
                userLeft--;
                cout << "You won!" << endl;
                cout << "Your current score is on " << score << ". You need " << userLeft << " to win" << endl;
                cout << "The computer score is " << compScore << ". It needs " << compLeft << " to win" << endl;
            }
        }
        else if (computer == 3) {
            cout << "The computer chose: Scissors" << endl;
            if (lower(user) == "paper") {
                compScore++;
                compLeft--;
                cout << "The computer won." << endl;
                cout << "Your current score is on " << score << ". You need " << userLeft << " to win" << endl;
                cout << "The computer score is " << compScore << ". It needs " << compLeft << " to win" << endl;
            }
            else if (lower(user) == "rock") {
                score++;
                userLeft--;
                cout << "You won!" << endl;
                cout << "Your current score is on " << score << ". You need " << userLeft << " to win" << endl;
                cout << "The computer score is " << compScore << ". It needs " << compLeft << " to win" << endl;
            }
            else if (lower(user) == "scissors") {
                cout << "It was a tie." << endl;
                cout << "Your current score is on " << score << ". You need " << userLeft << " to win" << endl;
                cout << "The computer score is " << compScore << ". It needs " << compLeft << " to win" << endl;
            }

        }
    }
    if (score == 2)
        cout << "Congratulations you won!" << endl;
    else if (compScore == 2)
        cout << "Unfortuately the computer won." << endl;
}

string lower(string a) {
    for (int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
        
    }
    return a;
}
