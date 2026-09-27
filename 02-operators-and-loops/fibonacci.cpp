// Print the first n terms of the Fibonacci series

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long a = 0;
    long long b = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        long long nextNumber = a + b;
        a = b;
        b = nextNumber;
    }
    cout << endl;

    return 0;
}
