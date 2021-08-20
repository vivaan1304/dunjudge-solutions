// #include <boost/functional/hash.hpp>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
// typedef tree<int,null_type,greater<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set2;


using ll = long long;
using pl = pair<ll,ll>;
using vl = vector<ll>;
#define mp make_pair
#define f first
#define s second
 
// vectors
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define ins insert
#define pf push_front
#define pb push_back
 
// loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)
 
const int MOD = 1e9+7; // 998244353;
const ll INF = 1e18; // not too close to LLONG_MAX

#define int ll
const int xd[4] = {1,0,-1,0}, yd[4] = {0,1,0,-1}; // for every grid problem!!
const int N = 1000000+5;
int binpower(int x,int y,int p){
    x%=p;
    int res = 1;
    while(y>0){
        if(y%2==1){
            res = (res * x)%p;
        }
        x = (x * x)%p;
        y >>= 1ll;
    }
    return res;
}

int n;
int a[N];
void solve(){
    cin >> n;
   for(int i = 1;i<=n;i++){
       cin >> a[i];
   }
   int ans = 0;
   for(int i = 1;i<=n;){
       if(a[i] == -1){
           i ++;
           continue;
       }
       int s =0;
       int j = i;
       while(j <= n && a[j] != -1){
           s += a[j];
           j ++;
       }
       ans=max(ans,s);
       i = j;
   }

    cout<<ans<<"\n";
}

signed main() {
cin.tie(0)->sync_with_stdio(0);
cout.tie(0);
// you should actually read the stuff at the bottom
    
   
    
    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }
}
/* stuff you should look for
* read the probem 3 more times in case of WA :)
* int overflow, array bounds
* special cases (n=1?)
* do smth instead of nothing and stay organized
* WRITE STUFF DOWN
* DON'T GET STUCK ON ONE APPROACH
*/
