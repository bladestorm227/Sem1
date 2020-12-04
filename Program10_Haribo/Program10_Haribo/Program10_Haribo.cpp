#include <iostream>
using namespace std;

int main()
{
    int packets = 40;
    int students = packets / 14;
    int left = students * 14;

    cout << "The students get " << students << " each and the person gets " << packets - left << endl;
    
    return 0;

}


