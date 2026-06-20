#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int> dp(n+1, 0);
    for(int i = 1; i <= n; i++){
        if(s[i-1] == '.') dp[i] = dp[i-1];
        else if(s[i-1] == '@') dp[i] = dp[i-1]+1;
        else if(s[i-1] == '*' && s[i] == '*'){
            cout << dp[i-1] << ln;
            return;
        }else dp[i] = dp[i-1];
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

