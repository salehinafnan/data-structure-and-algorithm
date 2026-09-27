// Function that computes a^b

#include <iostream>
using namespace std;

long long power(int a, int b)
{
    long long ans = 1;
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
    cout << power(a, b) << endl;
    return 0;
}
