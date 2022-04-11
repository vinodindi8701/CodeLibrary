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
int a[N], b[N];
bool check(int x, int n){
    int m=1;
    for(int i=1 ; i<=n ; i++){
        if(a[i]!=x) b[m++] = a[i];
    }
    m--;
    for(int i=1 ; i<=m ; i++){
        if(b[i]!=b[m-i+1]) return false;
    }
    return true;
}

void fun()
{
    int n; cin>>n;
    for(int i=1 ; i<=n ; i++) cin>>a[i];
    int set=0;
    for(int i=1 ; i<=n ; i++){
        if(a[i] != a[n-i+1]){
            if(check(a[i], n) || check(a[n-i+1], n)) cout<<"YES\n";
            else cout<<"NO\n";
            set = 1;
            break;
        }
    }
    if(set==0) cout<<"YES\n";
}

int32_t main(){
    fastIO
    int t = 0; cin>>t;
    while(t--) fun();
    return 0;
}