#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    int tmp, ans = 0;
    for(int i = 1; i <= n; i++){
        cin >> tmp;
        if(abs(tmp-i)!= 0){
            ans = __gcd(abs(tmp-i), ans);
        }
    }
    cout << ans << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
