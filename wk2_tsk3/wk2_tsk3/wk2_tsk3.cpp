// wk2_tsk3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
//    int player_input;
//    cout << "enter 0 or 1..." << endl;
//    //take in input
//    cin >> player_input;
//
//    switch (player_input)
//    {
//    case 0:
//        //add code if 0
//        break;
//    case 1:
//        //add code if 1
//        break;
//    default:
//        //add code if none
//        break;
//    }
//
//    //or
//    switch (player_input)
//    {
//    case 0:
//    case 1:
//        //add code if 0 or 1
//        break;
//    default:
//        //add code if none
//        break;
    char play_again;
    cout << "Do you want to play again? 'y' or 'n'" << endl;
    cin >> play_again;

    switch (play_again)
    {
    case 'y':
        cout << "you chose to play again" << endl;
        break;
    case 'n':
        cout << "Goodbye..\n";
        break;
    default:
        cout << "That's not an option\n";
        break;
    }
}
