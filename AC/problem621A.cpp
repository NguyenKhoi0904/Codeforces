#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll sum = 0, min_odd = LLONG_MAX;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(a[i] % 2 != 0 && a[i] < min_odd){
            min_odd = a[i];
        }
    }
    if(sum % 2 != 0){
        sum -= min_odd;
    }
    cout << sum << endl;
    return 0;
}

