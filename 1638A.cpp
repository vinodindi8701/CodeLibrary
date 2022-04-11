#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define fi first
#define se second
#define pub push_back
#define pi pair<int,int>
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)vis[i]=0,v[i].clear();
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
#define mod 1000000007
#define elif else if

void fun()
{
    int n; cin>>n;
    int m1 = 1000, m2=1000;
    int chor=0;
    int i1=-1, i2=-1;
    int a[1000];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
        if(a[i]!=i+1 && chor==0) chor=i+1;
        if(a[i]==chor) i2=i;
    }

    if(i2 == -1){
        for(int i=0 ; i<n ; i++) cout<<a[i]<<" ";
    }
    else{
        for(int i=0 ; i<chor-1 ; i++) cout<<a[i]<<" ";
        for(int i=i2 ; i>=chor-1 ; i--) cout<<a[i]<<" ";
        for(int i=i2+1 ; i<n ; i++) cout<<a[i]<<" ";
    }
    cout<<endl;
}

int32_t main(){
    fastIO
    int t = 0; cin>>t;
    while(t--) fun();
    return 0;
}