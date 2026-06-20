#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
/*
    int ans = a[n-1], tmp = 0;
    for(int i = n-2; i >= 0; i--){
        if(a[i] > ans) ans = a[i];
        else ans = a[i+1] + 1; //(a[i+1] - a[i] + 1) + a[i]
    }
    cout << ans << "\n";
*/
    vector<int> dp(n, 0);
    dp[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--){
        if(a[i] > a[i+1]) dp[i] = max(dp[i+1]+1, a[i]);
        else{
            dp[i] = max(dp[i+1] + 1, dp[i]);
        }
    }
//    cout << "\n";
//    for(int i = 0; i < n; i++) cout << dp[i] << " ";

    cout << dp[0] << "\n";
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

