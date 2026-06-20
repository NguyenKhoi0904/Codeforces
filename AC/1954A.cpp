#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n,m,k; cin >> n >> m >> k;
    if(n - (n/m + (n%m!=0)) <= k) cout << "NO\n";
    else cout << "YES\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
