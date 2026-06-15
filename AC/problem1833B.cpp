#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll n,k; cin >> n >> k;
    vector<pair<ll,ll>> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(b.begin(), b.end());
    vector<ll> ans(n);
    for(int i = 0; i < n; i++){
        ans[a[i].second] = b[i];
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

