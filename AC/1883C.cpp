#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
int calculate_length_of_number(int n, int k){
    return (n+k-1)/k;
}
//void Solve(){
//    int n,k; cin >> n >> k;
//    vector<int> v(n),dp(n+1, INT_MAX);
//    for(int i = 0; i < n; i++) cin >> v[i];
//    if(k == 4){
//        int c = 0;
//        for(int i = 0; i < n; i++){
//            if(!(v[i]&1)){
//                if(v[i] % 4 == 0){
//                    cout << 0 << ln;
//                    return;
//                }else c++;
//            }
//        }
//        for(int i = 1; i <= n; i++){
//            if(v[i-1] % k == 0) dp[i] = 0;
//            else{
//                int tmp = calculate_length_of_number(v[i-1],k) * k - v[i-1];
//                dp[i] = min(dp[i-1], tmp);
//            }
//        }
//        cout << min(dp[n],(c >= 2?0:2-c)) << ln;
//    }else{
//        for(int i = 1; i <= n; i++){
//            if(v[i-1] % k == 0) dp[i] = 0;
//            else{
//                int tmp = calculate_length_of_number(v[i-1],k) * k - v[i-1];
//                dp[i] = min(dp[i-1], tmp);
//            }
//        }
//        cout << dp[n] << ln;
//    }
//
//}

void Solve(){
    int n,k; cin >> n >> k;
    vector<int> v(n),dp(n+1, INT_MAX);
    int c = 0;
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] % 2 == 0) c++;
    }
    for(int i = 1; i <= n; i++){
        if(v[i-1] % k == 0) dp[i] = 0;
        else{
            int tmp = calculate_length_of_number(v[i-1],k) * k - v[i-1];
            dp[i] = min(dp[i-1], tmp);
        }
    }
    ans = min(dp[n],ans);
    if(k == 4) ans = min(ans, c >= 2?0:2-c);
    cout << ans << ln;
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
