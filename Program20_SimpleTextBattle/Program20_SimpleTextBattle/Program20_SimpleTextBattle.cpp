#include <iostream>
using namespace std;

int playerHealth = 1000;
int enemyHealth = 2000;
bool playing = true;

void attackChoice(int choice, bool state) {
    const int swordDamage = 300;
    const int magicDamage = 650;
    const int axeDamage = 450;
    const int trollSword = 350;
    const int trollMagic = 50;
    const int trollAxe = 100;

    switch (choice) {
    case 1:
        enemyHealth -= swordDamage;
        playerHealth -= trollSword;
        cout << "You hit the troll. But you have taken damage in the process." << endl;
        if (playerHealth < 0) {
            playerHealth = 0;
        }
        if (enemyHealth < 0) {
            enemyHealth = 0;
        }
        cout << "You're current health is " << playerHealth << ". The enemy health is " << enemyHealth << "." << endl;
        break;

    case 2:
        enemyHealth -= magicDamage;
        playerHealth -= trollMagic;
        cout << "You hit the troll. But you have taken damage in the process." << endl;
        if (playerHealth < 0) {
            playerHealth = 0;
        }
        if (enemyHealth < 0) {
            enemyHealth = 0;
        }
        cout << "You're current health is " << playerHealth << ". The enemy health is " << enemyHealth << "." << endl;
        break;

    case 3:
        enemyHealth -= axeDamage;
        playerHealth -= trollAxe;
        cout << "You hit the troll. But you have taken damage in the process." << endl;
        if (playerHealth < 0) {
            playerHealth = 0;
        }
        if (enemyHealth < 0) {
            enemyHealth = 0;
        }
        cout << "You're current health is " << playerHealth << ". The enemy health is " << enemyHealth << "." << endl;
        break;
    }
}

    bool playState() {
        char playAgain;
        if (enemyHealth <= 0) {
            cout << "You have killed the troll. Would you like to play again? (y or n)" << endl;
            cin >> playAgain;
            if (playAgain == 'y') {
                playerHealth = 1000;
                enemyHealth = 2000;
                return playing = true;
            }
            else if (playAgain == 'n') {
                return playing = false;
            }
        }
        if (playerHealth <= 0){
            cout << "You have been killed. Would you like to play again? (y or n)" << endl;
            cin >> playAgain;
            if (playAgain == 'y') {
                playerHealth = 1000;
                enemyHealth = 2000;
                return playing = true;
            }
            else if (playAgain == 'n') {
                return playing = false;
            }
        }
        return false;
    }

int main()
{
    int playerChoice;
    while (playing) {
        cout << "You have met a troll and have 3 options of attack. 1 use sword. 2 use magic. 3 use axe. Your choices will have different effects." << endl;
        cin >> playerChoice;
        attackChoice(playerChoice, playing);
        playState();
    }
    cout << "You have chosen to exit." << endl;
}