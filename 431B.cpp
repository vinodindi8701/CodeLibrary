#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #define int long long int
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
#define VI vector<int>

int arr[6][6];
int x[6], ans=0;

int fun(int a, int b)
{
    a = x[a]; b=x[b];
    return arr[a][b]+arr[b][a];
}

int32_t main(){
    fastIO
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++) cin>>arr[i][j];
    }
    for(int i=0 ; i<5 ; i++) x[i] = i;
    do{
        ans = max(ans, fun(0,1) + fun(1,2) + fun(2,3)*2 + fun(3,4)*2);
    }
    while(next_permutation(x, x+5));
    cout<<ans<<endl;
    return 0;
}