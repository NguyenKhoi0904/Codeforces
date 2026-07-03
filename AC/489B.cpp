#include <bits/stdc++.h>

#define int long long
#define ln "\n"

using namespace std;

const int maxn = 100, maxm = 100;
int dp[maxn+1][maxm+1];
int a[maxn+1], b[maxm+1];
void Solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    int m; cin >> m;
    for(int i = 1; i <= m; i++) cin >> b[i];
    sort(b+1, b+m+1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(abs(a[i] - b[j]) > 1) dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            else dp[i][j] = max(dp[i-1][j-1] + 1, dp[i][j]);
        }
    }
    cout << dp[n][m] << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}
/*
5
10 10 10 10 10
5
10 10 10 10 10
*/
