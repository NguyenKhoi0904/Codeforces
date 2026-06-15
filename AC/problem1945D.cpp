#include <iostream>
#include <vector>
#define ln "\n"
typedef long long ll;
using namespace std;
void Solve(){
    int n,m; cin >> n >> m;
    vector<ll> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    vector<ll> b(n+1);
    vector<ll> prefix_sum_b(n+1,0);
    for(int i = 1; i <= n; i++){
        cin >> b[i];
        prefix_sum_b[i] = prefix_sum_b[i-1] + b[i];
    }

    vector<ll> dp(n+2, LLONG_MAX);
    ll mini = LLONG_MAX;
    for(int i = 1; i <= n+1; i++){
        if(i <= m) dp[i] = 0;
        else{
            dp[i] = mini + prefix_sum_b[i-1];
        }
        mini = min(mini, dp[i] + a[i] - prefix_sum_b[i]);
        cout << mini << " ";
    }
    cout << ln;
//    cout << dp[n+1] << ln;
    for(ll e: dp) cout << e << " ";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
