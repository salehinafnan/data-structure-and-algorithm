// Find the minimum and maximum value in an array

#include <climits>
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
    const int MAX_SIZE = 100;
    int size;
    cout << "Enter the size of the array (1-" << MAX_SIZE << ")" << endl;
    cin >> size;
    if (size < 1 || size > MAX_SIZE)
    {
        cout << "Invalid size" << endl;
        return 1;
    }

    int arr[MAX_SIZE];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i << " of the array" << endl;
        cin >> arr[i];
    }
    cout << "The maximum value is: " << getMax(arr, size) << endl;
    cout << "The minimum value is: " << getMin(arr, size) << endl;
    return 0;
}
