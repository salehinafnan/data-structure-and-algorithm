// nCr = n! / (r! * (n - r)!)
// Computing the factorials directly overflows an int from 13! onwards, so the value is
// built up one factor at a time: C(n, i) = C(n, i - 1) * (n - i + 1) / i, which is always exact

#include <iostream>
using namespace std;

long long nCr(int n, int r)
{
    if (r < 0 || r > n)
    {
        return 0;
    }
    if (r > n - r)
    {
        r = n - r; // C(n, r) == C(n, n - r), use the smaller one
    }
    long long ans = 1;
    for (int i = 1; i <= r; i++)
    {
        ans = ans * (n - i + 1) / i;
    }
    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
    return 0;
}
