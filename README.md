# Data Structures and Algorithms in C++

My C++ practice programs from working through a structured DSA course, organised by topic. It starts with control flow and patterns and builds up through bitwise tricks, number systems, functions and arrays, with a few LeetCode problems along the way.

Every program is a small, self-contained C++17 file that reads from standard input, and every one has a test case.

## Topics

| Folder                                                             | Topic                                                         | Programs                                                                                                                                                                                                      |
| ------------------------------------------------------------------ | ------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [`01-conditionals-loops-patterns`](01-conditionals-loops-patterns) | `if`/`else`, `while` loops, nested loops                      | character classification, sum of even numbers, prime check, 8 number/star patterns                                                                                                                            |
| [`02-operators-and-loops`](02-operators-and-loops)                 | bitwise operators, `for` loops, `continue`, scope, precedence | odd-occurrence element via XOR, Fibonacci series, prime check, variable scope, operator precedence                                                                                                            |
| [`03-number-systems`](03-number-systems)                           | binary representation                                         | decimal → binary (bit shifting), binary → decimal                                                                                                                                                             |
| [`04-leetcode`](04-leetcode)                                       | problem solving                                               | [1281. Subtract the Product and Sum of Digits](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/), [191. Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/) |
| [`05-switch-and-functions`](05-switch-and-functions)               | `switch`, functions, pass by value vs reference               | calculator, power, even/odd, nCr, prime function                                                                                                                                                              |
| [`06-arrays`](06-arrays)                                           | arrays and functions                                          | initialisation, passing arrays to functions, char arrays, min/max, array scope                                                                                                                                |

## Highlights

- **XOR trick** – [`xor_odd_occurrence.cpp`](02-operators-and-loops/xor_odd_occurrence.cpp) finds the element that appears an odd number of times in O(n) time and O(1) space, because `x ^ x = 0`.
- **Overflow-safe nCr** – [`ncr.cpp`](05-switch-and-functions/ncr.cpp) builds the result incrementally (`C(n, i) = C(n, i-1) * (n-i+1) / i`) instead of dividing factorials, which overflow an `int` from 13! onwards.
- **Prime check in O(√n)** – the prime programs only test divisors up to the square root and handle 0 and 1 correctly.
- **Bit manipulation** – decimal to binary and Hamming weight use `& 1` and `>>` instead of division.

## Build and run

Requires `g++` or `clang++` with C++17 support and `make`.

```bash
make                                  # compile every program into build/
make test                             # run all programs against their test cases
echo 10 | ./build/03-number-systems/decimal_to_binary   # 1010
```

To compile a single file without `make`:

```bash
g++ -std=c++17 -Wall 06-arrays/min_max.cpp -o min_max && ./min_max
```

## Tests

[`tests/run_tests.sh`](tests/run_tests.sh) pipes a sample input into each program and compares the output against the expected result, including edge cases such as `0`, `1`, division by zero and invalid binary digits. The same suite runs on every push through GitHub Actions.
