#include <iostream>
using namespace std;

int main()
{
	int first;
	int second;
	int third = 0;
	int sum;
	int mean;
	int iteration = 2;

	cout << "Enter a number" << endl;
	cin >> first;

	cout << "Enter another number" << endl;
	cin >> second;

	do
	{
		sum = first + second + third;
		mean = sum / iteration;
		cout << "The sum of your numbers are " << sum << endl;
		cout << "The average of your numbers are " << mean << endl;
		cout << "Enter another number" << endl;
		cin >> third;
		iteration++;
	} while (third != 0);
	

}