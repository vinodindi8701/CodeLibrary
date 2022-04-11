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

void fun()
{
    string s1, s2;
    int n1, n2;
    cin>>s1>>n1>>s2>>n2;
    int al, bl, l1, l2;
    l1 = s1.length();
    l2 = s2.length();
    al = l1 + n1;
    bl = l2 + n2;
    if(al>bl) cout<<">"<<endl;
    elif(bl>al) cout<<"<"<<endl;
    else{
        if(l1<l2){
            for(int i=0 ; i<l2-l1 ; i++) s1.pub('0');
        }
        elif(l2<l1){
            for(int i=0 ; i<l1-l2 ; i++) s2.pub('0');
        }
        if(s1>s2) cout<<'>'<<endl;
        elif(s1<s2) cout<<"<"<<endl;
        else cout<<'='<<endl;
    }
}

int32_t main(){
    fastIO
    int t = 0; cin>>t;
    while(t--) fun();
    return 0;
}