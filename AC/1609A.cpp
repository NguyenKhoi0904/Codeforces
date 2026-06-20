#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll ans = 0;
    ll tmp = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            while (a[i] % 2 == 0) {
                a[i] /= 2;
                tmp *= 2;
            }
        }
    }
    sort(a.begin(), a.end());
    a[n-1] = a[n-1]*tmp;
    for(int i = 0; i < n; i++){
        ans += a[i];
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

