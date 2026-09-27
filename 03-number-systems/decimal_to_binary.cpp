// Convert a non-negative decimal number to binary using bitwise operators

#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    if (n < 0)
    {
        cout << "Please enter a non-negative number" << endl;
        return 1;
    }

    string ans = "";
    do
    {
        int bit = n & 1;             // last bit
        ans = char('0' + bit) + ans; // prepend it
        n = n >> 1;                  // drop the last bit
    } while (n != 0);

    cout << ans << endl;
    return 0;
}
