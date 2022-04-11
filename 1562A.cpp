#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    int t;

    // cout << 13 / 2;

    cin >> t;

    while (t--)
    {
        long int r, l, temp, m = LONG_MIN;
        cin >> r >> l;

        if( r > l/2 ){
            cout << l % r << endl;
        }
        else{
            cout << l % (l/2 + 1) << endl;
        }
    }

    return 0;
}