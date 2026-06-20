#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll extra = 0;
    for(ll i = 0; i < n; i++){
        if(a[i]>=i){
            extra += (a[i]-i);
        }else if(a[i] + extra >= i){
            extra -= (i-a[i]);
        }else{
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
