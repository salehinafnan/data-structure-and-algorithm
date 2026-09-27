// Pass by value: the function gets its own copy, so the caller's variable does not change
// Each call gets a new stack frame that is discarded when the function returns

#include <iostream>
using namespace std;

void dummy(int n)
{
    n++;
    cout << "Dummy Value is " << n << endl;
}

void dummyByReference(int &n)
{
    n++;
    cout << "Reference Value is " << n << endl;
}

int main()
{
    int n;
    cin >> n;

    dummy(n);
    cout << "Main Function Value is " << n << endl;

    // For comparison: passing by reference changes the original variable
    dummyByReference(n);
    cout << "Main Function Value is " << n << endl;

    return 0;
}
