#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> v(n), dp(n+1, 0);
    int c =0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 1) c++;
    }
    int m = -1;
    for(int i = 1; i <= n; i++){
        dp[i] = max(dp[i-1]+(v[i-1]==1?-1:1),(v[i-1]==1?-1:1));
        m = max(m, dp[i]);
    }
    cout << m+c << ln;
}
int main(){
    IO
    Solve();
    return 0;
}

