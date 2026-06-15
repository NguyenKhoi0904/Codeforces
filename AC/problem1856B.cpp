#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll sum = 0, c1 = 0;
    for(int e : a){
        sum += e;
        if(e == 1) c1++;
    }
    if(sum >= c1+n && n > 1) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
