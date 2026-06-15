#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
const int MAXN = 1e6 + 10;
int cal(int n){
    int m = -1;
    while(n > 0){
        m = max(m,n%10);
        n /= 10;
    }
    return m;
}
void Solve(){
    ll n; cin >> n;
    vector<int> dp(MAXN, INT_MAX);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        int d = cal(i);
        dp[i] = min(dp[i], dp[i-d]+1);
    }
    cout << dp[n] << ln;
}
int main(){
    IO
    Solve();
    return 0;
}

