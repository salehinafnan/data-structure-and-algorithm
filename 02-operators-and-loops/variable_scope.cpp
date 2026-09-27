// Variable scoping: a variable lives only inside the block ({ ... }) it was declared in

#include <iostream>
using namespace std;

int globalCount = 0; // global scope: visible everywhere in this file

int main()
{
    int a = 3; // local to main

    if (true)
    {
        int b = 5; // local to this if block
        cout << "a + b inside the block = " << a + b << endl;
    }
    // cout << b; // error: b does not exist outside its block

    // An inner declaration with the same name shadows the outer one
    {
        int a = 10;
        cout << "inner a = " << a << endl;
    }
    cout << "outer a = " << a << endl;

    // The loop counter only exists inside the loop
    for (int i = 0; i < 3; i++)
    {
        globalCount++;
    }
    cout << "globalCount = " << globalCount << endl;

    return 0;
}
