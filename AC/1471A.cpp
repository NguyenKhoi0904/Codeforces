#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll n,x; cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll maxi = 0, mini = 0;
    for(int i = 0; i < n; i++){
        mini += a[i];
        maxi += ceil(1.0*a[i]/x);
    }
    mini = ceil(1.0*mini/x);
    cout << mini << " " << maxi << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
