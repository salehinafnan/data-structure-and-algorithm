// XOR operation

#include <iostream>
using namespace std;

// Function to return the only odd
int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res ^= arr[i];
    return res;
}

int main(void)
{
    int arr[] = {12, 12, 14, 90, 14, 14, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The odd occurring element is " << findOdd(arr, n);
    return 0;
}

// Fiboncci Series

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++)
    {
        int nextNumber = abs(a + b);
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }

    return 0;
}

// Prime number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "Not a Prime Number" << endl;
    }
    else
    {
        cout << "Is a Prime Number" << endl;
    }
}

// Continue Operation

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 5; i++)
    {
        cout << "HI" << endl;
        cout << "HEY" << endl;
        continue;
        cout << "Reply Please"; // anything under the continue op will be unreachable
    }

    return 0;
}

// Variable Scoping

// Operator Precedence