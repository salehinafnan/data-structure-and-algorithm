// Convert a binary number (entered as digits of 0 and 1) to decimal

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long ans = 0;
    long long placeValue = 1; // 2^0, 2^1, 2^2, ...
    while (n > 0)
    {
        int digit = n % 10;
        if (digit > 1)
        {
            cout << "Invalid binary number" << endl;
            return 1;
        }
        ans = ans + digit * placeValue;
        placeValue = placeValue * 2;
        n = n / 10;
    }
    cout << ans << endl;
    return 0;
}
