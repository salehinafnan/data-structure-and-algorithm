// Find the element that occurs an odd number of times using XOR
// x ^ x = 0 and x ^ 0 = x, so every value that appears an even number of times cancels out

#include <iostream>
using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res ^= arr[i];
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[1000];
    if (n < 1 || n > 1000)
    {
        cout << "n must be between 1 and 1000" << endl;
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The odd occurring element is " << findOdd(arr, n) << endl;
    return 0;
}
