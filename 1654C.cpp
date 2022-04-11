#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define elif else if

queue<int> q;
map<int, int> mp;

void fun()
{
    int n; cin>>n;
    // Clear
    while(!q.empty()) q.pop();
    // done
    int mi=LONG_LONG_MAX, ma=LONG_LONG_MIN, sum=0;
    mp.clear();
    for(int i=0 ; i<n ; i++){
        int t; cin>>t;
        mp[t] = mp[t] + 1;
        mi = min(mi, t);
        ma = max(ma, t);
        sum = sum + t;
    }
    if(sum < ma) cout<<"NO\n";
    elif(sum == ma && n>1) cout<<"NO\n";
    elif(sum == ma && n==1) cout<<"YES\n";
    else{
        int num = n;
        q.push(sum);
        while(q.front() >= 1){
            int a, b, t = q.front();
            q.pop();
            if(t&1){
                a = (t-1)/2;
                b = (t+1)/2;
            }
            else{
                a=t/2; b=t/2;
            }
            if(mp[a]>0) mp[a]--;
            else q.push(a);

            if(mp[b]>0) mp[b]--;
            else q.push(b);
        }
        if(q.empty()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int32_t main(){
    // fastIO
    int t = 0; cin>>t;
    while(t--) fun();
    return 0;
}