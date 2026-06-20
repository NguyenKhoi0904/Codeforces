#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll a,b,c,d; cin >> a >> b >> c >> d;
    if(a <= b){
        cout << b << endl;
    }else if(d >= c){
        cout << -1 << endl;
    }else{
        ll ans = b;
        ll m = a-b;
        ll sm = c-d;
        m = ((m+sm-1)/sm)*c;
        ans += m;
        cout << ans << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
