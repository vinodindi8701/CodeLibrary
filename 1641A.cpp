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
    int n, x; cin>>n>>x;
    map<int, int> m;
    for(int i=0 ; i<n ; i++){
        int t; cin>>t;
        m[t] = m[t] + 1;
    }
    int l=m.size();
    map<int, int>::iterator itr = m.begin();
    // for(auto x:m) cout<<x.first<<" "<<x.second<<endl;
    // cout<<endl;
    for(int i=0 ; i<m.size() ; i++){
        pi p = *itr;
        itr++;
        int s = (p.first)*x;

        if(m.find(s) == m.end()) continue;
        elif(p.second == 0) continue;
        elif(m[s] == 0) continue;
        else{
            if(m[s] > p.second){
                m[s] = m[s] - p.second;
                m[p.first] = 0;
                l = l-p.second;
            }
            elif(m[s] == p.second){
                m[s] = 0; m[p.first] = 0;
                l = l-(p.second * 2);
            }
            elif(m[s] < p.second){
                m[p.first] = m[p.first] - m[s];
                m[s] = 0;
                l = l-m[s];
            }
        }
        // for(auto x:m) cout<<x.first<<" "<<x.second<<endl;
        // cout<<endl;
    }
    int ans = 0;
    for(auto x:m){
        ans = ans + x.second;
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastIO
    int t = 0; cin>>t;
    while(t--) fun();
    return 0;
}