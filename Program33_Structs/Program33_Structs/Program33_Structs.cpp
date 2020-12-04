#include <iostream>
#include <string>
using namespace std;

struct personDetails
{
    string userName;
    int userAge;
    string userNum;
    void printDetails()
    {
        cout << userName << endl;
        cout << userAge << endl;
        cout << userNum << endl;

    }


};


int main()
{
    personDetails person;
    cout << "Enter your name" << endl;
    getline(cin, person.userName);
    cout << "Enter your age" << endl;
    cin >> person.userAge;
    cout << "Enter your telephone number" << endl;
    cin >> person.userNum;
    person.printDetails();
    
    
}
