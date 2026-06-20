#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


void Solve(){
    int n,k; cin >> n >> k;
    string s; cin >> s;
    if(k == 0){
        cout << "YES\n";
        return;
    }
    if(2*k == n){
        cout << "NO\n";
        return ;
    }
    bool flag = true;
    for(int i = 0; i < k; i++){
        flag = flag && s[i] == s[n-i-1];
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";

}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
