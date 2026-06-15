#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll n,k; cin >> n >> k;
    ll ans = 0;
    while(n != 0){
        if(n % k == 0){
            n /= k;
            ans++;
        }else{
            ll tmp = n%k;
            ans += tmp;
            n -= tmp;
        }
    }
    cout << ans << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
