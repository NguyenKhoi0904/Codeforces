#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
#define maxn 100005
using namespace std;
/*
void Solve(){
    vector<int> dp(maxn,0);
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        dp[tmp] = -1;
    }
    for(int i = 1; i < maxn; i++){
        if(dp[i] == -1) dp[i] = dp[i-1] + 1;
        else dp[i] = dp[i-1];
    }
    int q; cin >> q;
    while(q--){
        int m; cin >> m;
        if(m > 100000) cout << n << ln;
        else cout << dp[m] << ln;
    }
}
*/

void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0;i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int q; cin >> q;
    while(q--){
        int m; cin >> m;
        cout << upper_bound(v.begin(), v.end(), m) - v.begin() << ln;
    }
}
int main(){
    IO;
    Solve();
    return 0;
}

