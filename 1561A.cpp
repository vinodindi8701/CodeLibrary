#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void fun(int a[], int n)
{
    int c = 0, t = 1;

    while (!is_sorted(a, a + n))
    {
        if (t > 0)
        {
            for (int i = 0; i < n - 1; i = i + 2)
            {
                if (a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                }
            }
            c++;
        }
        else
        {
            for (int i = 1; i < n - 1; i = i + 2)
            {
                if (a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                }
            }
            c++;
        }

        t = (-1) * t;
    }
    cout << c << endl;
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        fun(a, n);
    }

    return 0;
}