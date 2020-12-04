#include <iostream>
using namespace std;

bool isodd(int a) {
    if ((a % 2) == 1) {
        return true;
    }
    else {
        return false;
    }

}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal) {
    cout << "Number of odd numbers: " << numOfOdd << ". Sum of odd numbers: " << oddTotal << ". Number of even numbers: " << numOfEven << ". Sum of Even numbers " << evenTotal << endl;
}


int main()
{
    int num;
    int odd = 0;
    int oddSum = 0;
    int even = 0;
    int evenSum = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter a number" << endl;
        cin >> num;
        isodd(num);
        if (isodd(num) == true)
        {
            odd++;
            oddSum += num;
        }
        else {
            even++;
            evenSum += num;
        }
    }
    outputResults(odd, oddSum, even, evenSum);
}