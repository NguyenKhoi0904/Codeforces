#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;

using namespace std;

void Solve(){
    int n,k,p; cin >> n >> k >> p;
    if(k < 0) k = k * -1;
    int tmp = k/p;
    if(n * p < k){
        cout << -1 << ln;
        return;
    }

    if(k % p == 0) cout << tmp << ln;
    else cout << tmp + 1 << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) Solve();
    return 0;
}
