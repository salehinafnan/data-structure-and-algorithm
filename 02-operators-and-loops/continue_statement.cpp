// continue skips the rest of the current iteration and jumps to the next one

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "HI" << endl;
        cout << "HEY" << endl;
        continue;
        cout << "Reply Please" << endl; // never runs: everything after continue is skipped
    }

    // A more practical use: print only the odd numbers
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
