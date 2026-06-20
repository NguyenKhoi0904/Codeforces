#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll n; cin >> n;
    if(n % 2 != 0){
        cout << -1 << endl;
        return;
    }
    if (n == 2){
        cout << -1 << endl;
        return;
    }
    ll maxv = n/4;
    ll minv = n/6 + (n%6>0);
    cout << minv << " " << maxv << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
