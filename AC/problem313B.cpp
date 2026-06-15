#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    string s; cin >> s;
    int n = s.size();
    vector<int>dp(n+1,0);
    for(int i = 0; i < n-1; i++){
        if(s[i] == s[i+1]){
            dp[i+1] = dp[i]+1;
        }else dp[i+1] = dp[i];
    }
    int m; cin >> m;
    while(m--){
        int l,r; cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << ln;
    }
}
int main(){
    IO
    Solve();
    return 0;
}
