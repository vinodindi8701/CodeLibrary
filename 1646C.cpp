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

vector<int> v;

int fact(int n)
{
    int a = 1;
    for(int i=1 ; i<=n ; i++) a = a * i;
    return a;
}

bool notin(int f)
{
    for(int i=0 ; i<v.size() ; i++){
        if(v[i] == f) return false;
    }
    return true;
}

void pre()
{
    for(int i=0 ; i<=40 ; i++){
        if(pow(2, i) <= 1e12) v.push_back(pow(2, i));
    }
    for(int i=1 ; i<=15 ; i++){
        int f = fact(i);
        if(notin(f) && f<=1e12) v.push_back(f);
    }
    sort(v.begin(), v.end());
}


int rec(int n, int l, int c)
{
    if(n==0 && l>=0) return c;
    if(l==0 && n!=0) return -1;

    if(v[l-1]<=n && (c = rec(n-v[l-1], l-1, c+1))>-1){
        return c;
    }
    else rec(n, l-1, c);
}

void fun()
{
    int n; cin>>n;
    int l = v.size();
    int c = 0;
    c= rec(n, l, c);
    cout<<c<<endl;
}

int32_t main(){
    fastIO
    pre();
    int t = 0; cin>>t;
    while(t--) fun();
    return 0;
}