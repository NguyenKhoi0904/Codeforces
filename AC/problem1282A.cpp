#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll a,b,c,r; cin >> a >> b >> c >> r;
    ll left = c-r, right = c+r;
    left = max(left, min(a,b));
    right = min(right, max(a,b));
    ll tmp = 0;
    cout << abs(b-a) - max(tmp, right - left) << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

