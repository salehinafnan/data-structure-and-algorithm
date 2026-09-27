// Passing an array to a function

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // sizeof only works here, in the scope where the array was declared
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, arrSize);
    cout << "The size of the array is: " << arrSize << endl;

    return 0;
}
