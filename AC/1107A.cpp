#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    if(n == 2 && s[0]>=s[1]){
        cout << "NO\n";
    }else{
        cout << "YES\n";
        cout << 2 << endl;
        cout << s[0] << " " << s.substr(1) << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
