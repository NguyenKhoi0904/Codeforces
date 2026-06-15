#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<ll> prefix_sum(n+1);
    for(int i = 1; i <= n; i++) prefix_sum[i] = prefix_sum[i-1] + v[i-1];
    ll c = 0, m = v[0];
    if(prefix_sum[1] == 0) c++;
    for(int i = 1; i < n; i++){
        m = max(m, v[i]);
        if(prefix_sum[i+1] - m == m) c++;
    }
    cout << c << ln;
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

/*
1
4
1 1 2 0
*/
