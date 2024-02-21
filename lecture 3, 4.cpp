// Check the type of Char input

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ch;
        cin >> ch;
        if (isalpha(ch) && isupper(ch))
        {
            cout << "Upper Alphabet" << endl;
        }
        else if (isalpha(ch) && islower(ch))
        {
            cout << "Lower Alphabet" << endl;
        }
        else
        {
            cout << "Numeric" << endl;
        }
    }
    return 0;
}

// While loop

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + 1;
        i = i + 2;
    }
    cout << sum << endl;
    return 0;
}

// prime number

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    int sum = 0;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Prime For" << i << endl;
        }
        else
        {
            cout << "Not Prime For" << i << endl;
        }
        i = i + 1;
    }
    return 0;
}

// Patterns

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*" << endl;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// P2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// P4

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// P5

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// P6

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

// P7

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*";

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

// P8

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row;

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}

// P9

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count;
            count = count + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
