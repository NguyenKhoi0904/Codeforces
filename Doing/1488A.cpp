#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll x,y; cin >> x >> y;
    ll a = y/x, b = y%x;
    cout << a/10 + a%10 + b << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
