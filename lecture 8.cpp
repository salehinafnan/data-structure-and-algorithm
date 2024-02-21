// Switch Statements (only int and char type can be used)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // Can't use continue() in switch satements
    cin.tie(nullptr);
    int num = 199;
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

// Simple Calculator

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cout << "Enter the Value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;

    char op;
    cout << "Enter the operation you want to perform" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        cout << "Please enter a valid operator" << endl;
    }
    return 0;
}

// Functions

#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int answer = power(a, b);
    cout << answer << endl;

    return 0;
}

// bool Function (Even Odd Check)

#include <bits/stdc++.h>
using namespace std;

bool isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;
    if (isEven(num))
    {
        cout << "Number is even" << endl;
    }
    cout << "Number is odd" << endl;

    return 0;
}

// nCr

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int nominator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    int ans = nominator / denominator;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
    return 0;
}

// Counting

#include <bits/stdc++.h>
using namespace std;

void /* wont return anything */ printCount(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    printCount(n);

    return 0;
}

// Prime or Not

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Number is Prime" << endl;
    }
    cout << "Number is not Prime" << endl;

    return 0;
}

// Function Stack

// Pass by Value

#include <bits/stdc++.h>
using namespace std;

void dummy(int n)
{
    n++;
    cout << "Dummy Value is " << n << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    dummy(n);
    cout << "Main Function Value is " << n << endl;

    return 0;
}