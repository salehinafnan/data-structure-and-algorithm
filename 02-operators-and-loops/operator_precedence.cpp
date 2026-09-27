// Operator precedence decides the order of evaluation when there are no brackets
// Higher to lower: () -> unary (!, ++, --) -> * / % -> + - -> << >> -> < <= > >= -> == != -> & -> ^ -> | ->
// && -> ||

#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 3, c = 4;

    cout << "a + b * c   = " << a + b * c << endl;   // 14: * before +
    cout << "(a + b) * c = " << (a + b) * c << endl; // 20: brackets first
    cout << "c / a * b   = " << c / a * b << endl;   // 6: same precedence, left to right
    cout << "a + b % c   = " << a + b % c << endl;   // 5: % before +

    // Comparison happens before &, so brackets are needed when testing bits
    cout << "(b & 1) == 1 -> " << ((b & 1) == 1) << endl;

    // && binds tighter than ||
    bool x = true, y = false, z = false;
    cout << "x || y && z is read as x || (y && z) -> " << (x || (y && z)) << endl;  // 1
    cout << "(x || y) && z                         -> " << ((x || y) && z) << endl; // 0

    // Prefix vs postfix increment
    int i = 5;
    int pre = ++i;  // i becomes 6, then 6 is used
    int post = i++; // 6 is used, then i becomes 7
    cout << "pre = " << pre << ", post = " << post << ", i = " << i << endl;

    return 0;
}
