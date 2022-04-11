#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int check( int n )
{
    int r, cp = n;

    if( n%10 == 3 ){
        return 1;
    }
    else{
        return 0;
    }
}

void fun( int a[] )
{
    int c = 1, r, n, i = 1;

    a[0] = 0;

    while( i < 1010 ){
        if( c%3 ==0 ){
            c++;
        }
        else if( check(c) ){
            c++;
        }
        else{
            a[i] = c;
            i++;
            c++;
        }
    }   
}

int main()
{
    int t, a[1010];

    fun(a);

    cin >> t;

    while( t-- ){
        int k;
        cin >> k;
        cout << a[k] << endl;
    }

    return 0;
}