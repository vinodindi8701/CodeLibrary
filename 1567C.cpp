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

int todec( vector<int> a, int n )
{
    int ans = 0, p=0;

    for( int i=n ; i>=0 ; i-- ){
        ans = ans + pow(10, p) * a[i];
        p++;
    }

    // cout << "ans = " << ans << endl;

    return ans+1;
}

void fun( string s )
{
    vector<int> a;
    vector<int> b;

    int a1, b1;

    for( int i=0 ; i<s.length() ; i++ ){
        if( i%2 == 0 ){
            a.push_back(s[i]-'0');
        }
        else{
            b.push_back(s[i]-'0');
        }
    }
    a1 = todec( a, a.size()-1 );
    if( b.size() == 0 ){
        b1 = 0;
        cout << a1 - 2 << endl;
    }
    else{
        b1 = todec( b, b.size()-1 );
        cout << (a1*b1)-2 << endl;
    }
}

int32_t main(){
    fastIO

    int n; cin >> n;

    while( n-- ){
        string s; 
        
        cin >> s;

        fun( s );
    }

    return 0;
}