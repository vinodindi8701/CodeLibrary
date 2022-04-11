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

#define N 200010

void fun()
{
    int n; cin>>n;
    int a[N];
    for(int i=n ; i>=1 ; i--) cin>>a[i];
    int m=1, ans=0;
    // for(int i=1 ; i<=n ; i++){
    //     int j=1;
    //     // cout<<i<<" "<<m<<"       ";
    //     while(j<=m && i+j<=n){
    //         if(a[i+j]!=a[1] && i+j<=n){
    //             ans++;
    //             // cout<<"NE:"<<i+j<<"\n";
    //             break;
    //         }
    //         j++;
    //     }
    //     i += m-1;
    //     cout<<i<<" "<<m<<endl;
    //     m *= 2;
    // }
    for(int i=1 ; i<n ; i++){
        // cout<<"ib:"<<i<<endl;
        if(a[i+1] != a[1] && i<n){
            ans++;
            i = (i*2)-1;
        }
        // cout<<"ia:"<<i<<endl;
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastIO
    int t = 0; cin>>t;
    while(t--) fun();
    return 0;
}