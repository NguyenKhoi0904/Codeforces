#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)

using namespace std;

const int maxn = 1e5;
int a[maxn], dp[maxn];
void Solve(){
    int n;
    dp[0] = 1;
    cin >> n;
    FOR0(n){
        cin >> a[i];
    }
    int max_v = 1;
    for(int i = 1; i < n; i++){
        if (a[i] > a[i-1]){
            dp[i] = dp[i-1] + 1;
            max_v = max(max_v, dp[i]);
        }else dp[i] = 1;
    }
    cout << max_v << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}

