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

int mex(string s1, string s2, int n)
{
    int z=0, o=0;

    rep(i,0,n){
        if( s1[i]=='0' && s2[i]=='0' ) z+=1;
        elif(s1[i]=='1'&& s2[i]=='1') o+=1;
        else{
            z+=1;
            o+=1;
        }

        if( z and o ) return 2;
    }
    if( z ) return 1;
    return 0;
}

int mex2( char a, char b )
{
    if( a=='0' and b=='0' ) return 1;
    elif(a=='1' and b=='1') return 0;
    else return 2;
}

void fun( string s1, string s2, int n )
{
    int i=0, sum=0;

    while(i<n){
        string a, b;
        a.pub(s1[i]);
        b.pub(s2[i]);
        if( mex2(s1[i], s2[i]) == 0){
            while( mex2(s1[i], s2[i]) == 0 ){
                i++;
                if( i<n ){
                    a.pub(s1[i]);
                    b.pub(s2[i]);
                }
            }
            sum += mex(a, b, a.size());
        }
        elif( (mex2(s1[i], s2[i]) == 1) and (mex2(s1[i+1], s2[i+1]) == 0) ){
            i++;
            sum+=2;            
        }
        else{
            sum += mex2(s1[i], s2[i]);
        }
        i++;
    }

    cout<<max(sum, mex(s1, s2, n))<<endl;
}

int32_t main(){
    fastIO
    int t; cin>>t;
    string s1, s2;
    int si;

    while(t--){
        cin>>si;
        cin>>s1>>s2;
        fun( s1, s2, si );
    }

    return 0;
}