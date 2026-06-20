#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll a,b,m; cin >> a >> b >> m;
    cout << (m/a) + (m/b) + 2<< endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
