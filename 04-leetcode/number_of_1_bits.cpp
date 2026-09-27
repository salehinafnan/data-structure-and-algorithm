// LeetCode 191 - Number of 1 Bits (Hamming weight)
// https://leetcode.com/problems/number-of-1-bits/

#include <cstdint>
#include <iostream>
using namespace std;

class Solution
{
  public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n != 0)
        {
            count += n & 1; // add the last bit
            n = n >> 1;     // move to the next bit
        }
        return count;
    }
};

int main()
{
    uint32_t n;
    cin >> n;
    cout << Solution().hammingWeight(n) << endl;
    return 0;
}
