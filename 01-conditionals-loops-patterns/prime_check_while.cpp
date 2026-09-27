// Check whether a number is prime using a while loop

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isPrime = n > 1;
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            isPrime = false;
            cout << n << " is divisible by " << i << endl;
            break;
        }
        i = i + 1;
    }

    if (isPrime)
    {
        cout << n << " is a Prime Number" << endl;
    }
    else
    {
        cout << n << " is not a Prime Number" << endl;
    }
    return 0;
}
