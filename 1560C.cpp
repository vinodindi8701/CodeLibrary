#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

typedef long int ll;

void fun(ll n)
{
    ll num = 1, i = 0;
    ll x, y;

    x = 1;
    y = 1;


    while( num+(2*i + 1) <= n ){
        num += (2*i + 1);
        i++;
        x++;
    }

    // cout << "n = " << num << endl;
    
    if( (num + x) > n ){
        y = n - num + 1;
    }
    else{
        y = x;
        ll t = n-num;
        x = x - (t-x+1);
    }

    cout << y << " " << x << endl;
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        fun(n);
    }

    return 0;
}