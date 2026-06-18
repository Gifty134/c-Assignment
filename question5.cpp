
#include <iostream>
using namespace std;

int main()
{
    int first, second;

    cout << "Enter first integer: ";
    cin >> first;

    cout << "Enter second integer: ";
    cin >> second;

    if (first > second)
    {
        cout << "First value is greater";
    }
    else
    {
        cout << "Second value is greater";
    }

    return 0;
}
