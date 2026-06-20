#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll n,s,t; cin >> n >> s >> t;
    ll tmp = max(n-s, n-t) + 1;
    cout << tmp << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
