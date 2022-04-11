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

#define N 10010

void fun()
{
    int n; cin>>n;
    string s; cin>>s;
    int z[N], o[N], zc=0, oc=0;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='0') z[zc++] = i;
        else o[oc++] = i;
    }
    int j=n-oc, k=0;
    // cout<<"j = "<<j<<endl;
    vector<int> v, v1;
    for(int i=j ; i<n ; i++){
        if(s[i]=='0'){
            v.pub(i+1);
            v1.pub(o[k++]+1);
            // v.pub(o[j-i]+1);
        }
    }
    if(v.size()>0){
        cout<<1<<endl<<2*v.size()<<" ";
        for(auto y:v1) cout<<y<<" ";
        for(auto x:v) cout<<x<<" ";
    }
    else cout<<0;
    cout<<endl;
}

int32_t main(){
    fastIO
    int t = 0; cin>>t;
    while(t--) fun();
    return 0;
}