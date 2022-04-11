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

int mex(string s)
{
    int z=0, o=0;

    rep(i,0,s.size()){
        if( s[i]=='0' ) z+=1;
        else o+=1;

        if( z and o ) return 2;
    }
    if( z ) return 1;
    return 0;
}

void fun( string s )
{
    int sum = 0;

    int i=0;

    while(i<s.size()){
        string s2;
        if(s[i]=='0'){
            while(s[i]=='0'){
                s2.pub(s[i]);
                i++;
            }
        }
        else{
            while(s[i]=='1'){
                s2.pub(s[i]);
                i++;
            }
        }
        sum += mex(s2);
    }
    cout<<min(sum,mex(s))<<endl;
}

int32_t main(){
    fastIO

    int t; cin>>t;

    string s;

    while(t--){
        cin>>s;
        fun(s);
    }

    return 0;
}