// LeetCode 1281 - Subtract the Product and Sum of Digits of an Integer
// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

#include <iostream>
using namespace std;

class Solution
{
  public:
    int subtractProductAndSum(int n)
    {
        int product = 1;
        int sum = 0;
        while (n != 0)
        {
            int digit = n % 10;
            product = product * digit;
            sum = sum + digit;
            n = n / 10;
        }
        return product - sum;
    }
};

int main()
{
    int n;
    cin >> n;
    cout << Solution().subtractProductAndSum(n) << endl;
    return 0;
}
