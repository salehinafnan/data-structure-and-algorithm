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
    printArray(ch, n);
    return 0;
}
