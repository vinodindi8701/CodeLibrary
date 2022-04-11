#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        long int r, l, temp, m = LONG_MIN;
        cin >> r >> l;

        if (l / 2 > r)
        {
            temp = l / 2;
            if (l % temp == 0)
            {
                cout << temp - 1 << endl;
            }
            else
            {
                cout << temp << endl;
            }
        }
        else if (l % r == 0)
        {
            for (long int i = r; i < l; i++)
            {
                if (l % i > m)
                {
                    m = l % i;
                }
            }
            cout << m << endl;
        }
        else
        {
            cout << l % r << endl;
        }
    }

    return 0;
}