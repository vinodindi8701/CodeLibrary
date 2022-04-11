#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

typedef long int ll;

void fun( ll a, ll b, ll c )
{
    ll m = max(a, b), diff;

    diff = abs(a - b);

    if( (2*diff < m) || (c > 2*diff) ){
        cout << -1 << endl;
    }
    else if( c+diff <= 2*diff ){
        cout << c + diff << endl;
    }
    else{
        cout << c - diff << endl;
    }
}

int main()
{
    int t;

    cin >> t;

    while( t-- ){
        ll a, b, c;
        cin >> a >> b >> c;
        fun( a, b, c );
    }

    return 0;
}