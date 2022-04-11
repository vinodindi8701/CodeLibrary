#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>
#include <cstring>

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
    int n, q; cin>>n>>q;
    string s; cin>>s;
    int c=0;
    for(int i=0 ; i<n-2 ; i++){
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c'){
            c++;
        }
    }
    int j;
    char ch;
    for(int i=0 ; i<q ; i++){
        cin>>j>>ch;
        j--;
        if(j<n-2 && s[j]=='a' && s[j+1]=='b' && s[j+2]=='c') c--;
        elif(j>0 && s[j]=='b' && s[j-1]=='a' && s[j+1]=='c') c--;
        elif(j>1 && s[j]=='c' && s[j-1]=='b' && s[j-2]=='a') c--;
        s[j]=ch;
        if(j<n-1 && s[j]=='a' && s[j+1]=='b' && s[j+2]=='c') c++;
        elif(j>0 && s[j]=='b' && s[j-1]=='a' && s[j+1]=='c') c++;
        elif(j>1 && s[j]=='c' && s[j-1]=='b' && s[j-2]=='a') c++;
        cout<<c<<endl;
    }
}

int32_t main(){
    fastIO
    int t = 1;
    // cin>>t;
    while(t--) fun();
    return 0;
}