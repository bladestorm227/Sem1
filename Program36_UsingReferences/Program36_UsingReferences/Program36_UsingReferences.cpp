#include <iostream>
using namespace std;

void addingnum(int& rNum);
void subtractingnum(int& rNum);

int main()
{
    int num;
    cout << "Enter a number." << endl;
    cin >> num;
    cout << num << endl;
    addingnum(num);
    cout << num << endl;
    cout << "Enter another number." << endl;
    cin >> num;
    cout << num << endl;
    subtractingnum(num);
    cout << num << endl;
}

void addingnum(int& rNum) {
    rNum += 25;
}

void subtractingnum(int& rNum) {
    rNum -= 25;
}