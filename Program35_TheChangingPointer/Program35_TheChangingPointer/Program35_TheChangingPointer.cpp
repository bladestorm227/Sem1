#include <iostream>
using namespace std;

void inputDetails(int* n1, int* n2);
void outputDetails(int& integer1, int& integer2, int* pointer);

int main()
{
    int num1, num2;
    int* pNum = &num1;
    inputDetails(&num1, &num2);
    outputDetails(num1, num2, pNum);
    pNum = &num2;
    cout << "pNum is now pointing to Num2." << endl;
    outputDetails(num1, num2, pNum);
    pNum = NULL;
}

void inputDetails(int* n1, int* n2) {
    cout << "Input a number" << endl;
    cin >> *n1;
    cout << "Input another number" << endl;
    cin >> *n2;
}

void outputDetails(int& integer1, int& integer2, int* pointer) {
    cout << "Num1 value = " << integer1 << endl;
    cout << "Num1 address in memory = " << &integer1 << endl;
    cout << "Num2 value = " << integer2 << endl;
    cout << "Num2 address in memory = " << &integer2 << endl;
    cout << "pNum value = " << pointer << endl;
    cout << "pNum dereferenced value = " << *pointer << endl;
    cout << "pNum address in memory = " << &pointer << endl;
}