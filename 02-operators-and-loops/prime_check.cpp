// Check whether a number is prime using a for loop and a flag

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool isPrime = n > 1;

    // A composite number always has a divisor no larger than its square root
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Is a Prime Number" << endl;
    }
    else
    {
        cout << "Not a Prime Number" << endl;
    }
    return 0;
}
