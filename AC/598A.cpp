#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll n; cin >> n;
    ll sum = (n*(n+1))/2;
    ll tmp = 1;
    while(tmp <= n)
        sum -= tmp*2, tmp*=2;
    cout << sum << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

