// bool function: check whether a number is prime

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "Number is Prime" << endl;
    }
    else
    {
        cout << "Number is not Prime" << endl;
    }
    return 0;
}
