// Array scope: an array is passed to a function as the address of its first element,
// so changes made inside the function are visible to the caller (unlike an int passed by value)

#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "Inside the function" << endl;
    arr[0] = 120; // changes the caller's array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);

    cout << "Back in main" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
