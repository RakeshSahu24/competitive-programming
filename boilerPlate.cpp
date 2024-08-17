#include <bits/stdc++.h>
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define ln "\n"
#define pb push_back
#define fi first
#define se second
#define PI 3.1415926535897932384626
typedef long long ll;
#define printVector(a) for(int i=0; i<a.size(); i++){cout<<a[i]<<" ";}cout<<ln;
#define take_vector(a) for(auto &x:a)cin>>x;
#define take_matrix(a,m,n) for(int i=0; i<m; i++){for(int j=0; j<n; j++){cin>>a[i][j];}}
#define print_matrix(a,m,n) for(int i=0; i<m; i++){for(int j=0; j<n; j++){cout<<a[i][j]<<" ";}cout<<ln;}
#define print_array(a,n) for(int i=0; i<n; i++){cout<<a[i]<<" ";}cout<<ln;
#define INF 2e18
#define sum(a) accumulate(a.begin(), a.end(),0)
#define max_ele(a) *max_element(a.begin(), a.end())
#define min_ele(a) *min_element(a.begin(), a.end())
ll MOD = 1000000007;
/*--------------------------------------------------------------------------------------------------*/

void solve() {
    ll n;
    cin >>n;
    vector<ll> vec(n);
    take_vector(vec);
    printVector(vec);
    

}
int main() {

    fast_cin();
    ll t;
    t = 1;
    cin >> t;

    while(t--){
        solve();
    }


    return 0;
}
