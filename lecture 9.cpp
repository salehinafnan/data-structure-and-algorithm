// Array

#include <iostream>
using namespace std;

int main()
{
    int num[15];
    cout << num[1] << endl;

    // Initializing an array
    int second[3] = {0, 1, 2};
    cout << second[1] << endl;

    // Using the 'i' variable to print array
    int third[15] = {12, 4, 16};
    int n = 15;

    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }

    int fourth[10] = {0};
    n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }

    return 0;
}

// Arrays with function

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
    int n = 5;
    printArray(arr, n);

    int arrSize = sizeof(arr) / sizeof(int);
    cout << "The size of the array is: " << arrSize << endl;

    return 0;
}

// Array of characters

#include <iostream>
using namespace std;

void printArray(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    int n = 5;
    cout << ch[3] << endl;
    printArray(ch, 5);
}

// Find the min and maximum value in an array

#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << "th element of the array" << endl;
        cin >> arr[i];
    }
    cout << "The maximum value is: " << getMax(arr, size) << endl;
    cout << "The minimum value is: " << getMin(arr, size) << endl;
    return 0;
}

// Array Scope
