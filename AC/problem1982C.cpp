#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    int n,l,r; cin >> n >> l >> r;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> dp(n+1, 0);
    int j = 0, sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i-1];
        while(sum - a[j] >= l){
            sum -= a[j++];
        }
        if(l <= sum && sum <= r) dp[i] = max(dp[i-1], dp[j]+1);
        else dp[i] = max(dp[i-1],dp[j]);
    }
    cout << dp[n] << ln;
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
/*
1
5 3 10
2 1 11 3 7
*/
