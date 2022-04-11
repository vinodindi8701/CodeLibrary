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

#define N 100010

int solve(vector<pi> v)
{
    int sum = 0;
    for(int i=0 ; i<v.size() ; i++){
        for(int j=i ; j<v.size() ; j++){
            if(i!=j){
                sum = sum + abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second);
            }
        }
    }
    return sum;
}

int32_t main(){
    fastIO
    int a[100][100];
    int n, m; cin>>n>>m;
    map<int, vector<pi>> mp;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=m ; j++){
            cin>>a[i][j];
            mp[a[i][j]].push_back(make_pair(i,j));
        }
    }
    int sum = 0;
    // map<int, vector<pi>>::iterator x;
    for(auto x=mp.begin() ; x!=mp.end() ; x++){
        sum = sum + solve(x->second);
    }
    cout<<sum<<endl;
    return 0;
}