#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 1; i < n; i++){
        if(a[i] >= a[i-1]){
            cout << "YES\n";
            return ;
        }
    }
    cout << "NO\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

