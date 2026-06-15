#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll tmp;
    ll minv = *min_element(a.begin(), a.end());
    ll maxv = *max_element(a.begin(), a.end());
    if(abs(maxv - minv) == 0){
        tmp = n*(n-1);
        cout << tmp << endl;
        return ;
    }
    ll cmi = 0, cma = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] == minv) cmi++;
        else if(a[i] == maxv) cma++;
    }
    tmp = 2*cmi*cma;
    cout << tmp << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

