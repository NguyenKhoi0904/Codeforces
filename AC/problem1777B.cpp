#include <bits/stdc++.h>
typedef int long long ill;
const int mod = 1e9 + 7;
using namespace std;
ill giaithua(int n){
    ill r = 1;
    for(int i = 1; i <= n; i++){
        r *= i;
        r %= mod;
    }
    return r;
}
void Solve(){
    ill n; cin >> n;
    ill gt = giaithua(n);
    ill ans = n*(n-1);
    ans %= mod;
    ans = (gt * ans)%mod;
    cout << ans << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
