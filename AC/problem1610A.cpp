#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll n,m; cin >> n >> m;
    if(n == 1 && m == 1){
        cout << 0 << endl;
        return;
    }
    if(n == 1 || m == 1){
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
