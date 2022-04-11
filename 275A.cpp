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

int mat[5][5];

void neg( int i, int j )
{
    rep(k,i-1, i+2){
        mat[k][j] = !(mat[k][j]);
    }
    rep(l,j-1,j+2){
        mat[i][l] = !(mat[i][l]);
    }

    mat[i][j] = !mat[i][j];
}

int32_t main(){
    fastIO
    rep(i, 0, 5) rep(j,0,5) mat[i][j] = 1;

    int a[4][4];

    rep(i,1,4) rep(j,1,4) cin>>a[i][j];

    rep(i,1,4){
        rep(j,1,4){
            if( a[i][j] % 2 ) neg(i,j);
        }
    }

    rep(i,1,4){
        rep(j,1,4) cout << mat[i][j];
        cout << endl;
    }

    return 0;
}