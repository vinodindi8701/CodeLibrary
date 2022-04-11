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
 
void solve( int n, string s )
{
    char a[55][55];
    int rec[55] = {0};
 
    rep( i, 0, n ) rep(j,0,n){
        if( i==j ) a[i][i] = 'X';
        else a[i][j] = '0';
    }
    
    int c=0;

    rep(i,0,n){
        if( s[i] == '1' ) continue;
        rep(j,0,n){
            if( s[j] == '1' || a[i][j] != '0' ) continue;
            else{
                if(!rec[i]){
                    a[i][j] = '+';
                    a[j][i] = '-';
                    rec[i]++;
                }
                else break;
            }
        }
        if( !rec[i] ) c++;
    }
    if( c ){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    rep(i,0,n){
        rep(j,0,n){
            if( a[i][j] == '0' ) a[i][j] = '=';
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
 
int32_t main(){
    fastIO
 
    int t; cin >> t;
 
    while( t-- ){
        int n;
        string s;
 
        cin >> n >> s;
 
        solve( n, s );
    }
 
    return 0;
}