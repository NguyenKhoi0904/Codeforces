#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll x = 2*a[0]-1;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += (a[i]/x);
        if(a[i]%x == 0) ans--;
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

