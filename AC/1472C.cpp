#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)
#define int long long
using namespace std;

const int maxn = 2e5;

int dfs(int index, int n, int *a, int point){
    if (index + a[index] > n) return point + a[index];
    return dfs(index + a[index], n, a, point + a[index]);
}

void Solve(){
    int n; cin >> n;
    int a[n+1], dp[n+1];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        dp[i] = 0;
    }
    int r = -1;
    for (int i = n; i > 0; i--){
        if (i + a[i] > n) dp[i] = dp[i] + a[i];
        else dp[i] = dp[i] + a[i] + dp[i + a[i]];
        r = max(r, dp[i]);
    }
    cout << r << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) Solve();
    return 0;
}
/*
1
5
7 3 1 2 3
*/
# 7
