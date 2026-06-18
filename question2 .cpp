#include <iostream>
using namespace std;

int main()
{
    double radius, area;

    cout << "Enter radius: ";
    cin >> radius;

    area = 3.14159 * radius * radius;

    cout << "Area of circle = " << area << endl;

    return 0;
}
