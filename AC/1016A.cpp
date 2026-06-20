#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n,m; cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> ans;
    ll r = 0;
    for(int i = 0; i < n; i++){
        ans.push_back((r+a[i])/m);
        r = (r+a[i])%m;
    }
    for(ll e: ans)
        cout << e << " ";
    cout << endl;
    return 0;
}

