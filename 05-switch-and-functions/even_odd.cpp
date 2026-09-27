// bool function: check whether a number is even using the last bit

#include <iostream>
using namespace std;

bool isEven(int a)
{
    return (a & 1) == 0; // the last bit of an odd number is always 1
}

int main()
{
    int num;
    cin >> num;
    if (isEven(num))
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
    return 0;
}
