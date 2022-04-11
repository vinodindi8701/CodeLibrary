#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <sstream>
#include <numeric>

using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define elif else if

void fun()
{
    int n; cin>>n;
    vector<int> v(n);
    int ma=0, mi=LONG_MAX, c=0;
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
        if(v[i]>ma) ma = v[i];
        if(v[i]<mi) mi = v[i];
    }
    set<int> s(v.begin(), v.end());
    int avg = accumulate(s.begin(), s.end(), 0) / s.size();
    int ans = (ma-avg) + (avg-mi);
    cout<<ans<<endl;
}

int32_t main()
{
    fastIO
    int t; cin>>t;
    while(t--) fun();
    return 0;
}