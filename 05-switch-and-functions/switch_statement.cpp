// switch works with integral types only (int, char, enum, ...), not with strings or floats
// break exits the switch; without it execution falls through to the next case

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    default:
        cout << "Default" << endl;
    }

    return 0;
}
