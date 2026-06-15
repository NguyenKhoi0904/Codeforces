#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n,m; cin >> n >> m;
    bool flag = false;
    for(int i = 0; i < n; i++){
        int a,b,c,d; cin >> a >> b >> c >> d;
        flag |= b==c;
    }
    if(flag && m%2 == 0)cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
