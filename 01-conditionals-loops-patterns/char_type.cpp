// Classify a character as an uppercase letter, lowercase letter, digit or special character

#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ch;
        cin >> ch;
        if (isupper(ch))
        {
            cout << "Uppercase Letter" << endl;
        }
        else if (islower(ch))
        {
            cout << "Lowercase Letter" << endl;
        }
        else if (isdigit(ch))
        {
            cout << "Digit" << endl;
        }
        else
        {
            cout << "Special Character" << endl;
        }
    }
    return 0;
}
