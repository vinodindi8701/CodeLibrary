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
// #define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
#define mod 1000000007
#define elif else if

void print(int a, int b)
{
    cout<<a<<" "<<b<<endl;
}

bool comp(string s)
{
    int c=0;
    bool ans;
    for(int i=0 ; i<s.length() ; i++){
        if(s[i] == '(') c++;
        else c--;
        if(c<0) return false;
    }
    if(c==0) ans = true;
    else ans = false;
    return ans;
}

bool pal(string s)
{
    if(s.length() == 1) return false;
    int l =s.length();
    for(int i=0 ; i<l/2 ; i++){
        if(s[i] == s[l-i-1]) continue;
        else return false;
    }
    return true;
}

bool isgood(string s)
{
    if(pal(s) || comp(s)) return true;
    return false;
}

void fun()
{
    int n; cin>>n;
    string s; cin>>s;
    string s2 = s;
    reverse(s2.begin(), s2.end());
    int c=0, r=n, p=0;
    for(int i=1 ; i<=n ; i++){
        if(i<=p) continue;
        string s2 = s.substr(p, i-p);
        // cout<<i<<" "<<s2<<" ";
        if(isgood(s2)){
            // print(p, i);
            c++;
            r=r-s2.length();
            p=i;
            // print(p, i);
        }
        // cout<<endl;
        // else cout<<"NO\n";
    }
    print(c, r);
}

int32_t main(){
    fastIO
    int t = 0; cin>>t;
    while(t--) fun();
    return 0;
}