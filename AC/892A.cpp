#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll sum = accumulate(a.begin(), a.end(), 0LL);
    vector<ll> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(b.begin(), b.end());
    ll s = b[n-1]+b[n-2];
    if(s >= sum) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

