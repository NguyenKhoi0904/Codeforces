#include <bits/stdc++.h>
#define ll long long
using namespace std;
//Cách này tamh thời chưa ổn
//void Solve(){
//    int n, m, k; cin >> n >> m >> k;
//    string a; cin >> a;
//    vector<int> dp(n+2,100000);
//    dp[0] = 0;
//    for(int i = 1; i <= n+1; i++){
//        if(i != n+1 && a[i-1] == 'C') continue;
//
//        for(int j = 1; j <= m; j++){
//            if(i - j >= 0 && (i - j == 0 || a[i-j-1] == 'L')){
//                dp[i] = min(dp[i], dp[i-j]);
//            }
//        }
//        if(i > 1 && a[i-2] == 'W') dp[i] = min(dp[i], dp[i-1] + 1);
//    }
////    for(int i = 0; i < n+2; i++) cout << "i:" << i << " " << dp[i] << " ";
////    cout << endl;
//    if(dp[n+1] <= k){
//        cout << "YES\n";
//        return;
//    }
//    cout << "NO\n";
//}

void Solve(){
    int n, m, k; cin >> n >> m >> k;
    string a; cin >> a;
    vector<int> dp(n+2,-1);
    dp[0] = k;
    for(int i = 1; i <= n+1; ++i){
        if(i != n+1 && a[i-1] == 'C') continue;

        for(int j = 1; j <= m; j++){
            if(i-j >= 0 && (i-j == 0 || a[i-j-1] == 'L'))
                dp[i] = max(dp[i], dp[i-j]);
        }
        if(i > 1 && a[i-2] == 'W') dp[i] = max(dp[i], dp[i-1]-1);
    }

    if(dp[n+1] >= 0){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
