// Declaring, initialising and printing arrays

#include <iostream>
using namespace std;

int main()
{
    // Declared without initialisation: the values are garbage and must not be read
    int num[15];
    num[1] = 7;
    cout << num[1] << endl;

    // Initialising an array
    int second[3] = {0, 1, 2};
    cout << second[1] << endl;

    // Partial initialisation: the remaining elements are set to 0
    int third[15] = {12, 4, 16};
    int n = 15;
    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }
    cout << endl;

    // {0} sets every element to 0
    int fourth[10] = {0};
    n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << fourth[i] << " ";
    }
    cout << endl;

    return 0;
}
