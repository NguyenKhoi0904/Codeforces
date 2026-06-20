#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll x,y; cin >> x >> y;
    if((x-y)==1){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
