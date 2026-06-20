#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll n; cin >> n;
    if (n == 1){
        cout << 9 << endl;
        return;
    }
    if (n == 2){
        cout << 98 << endl;
        return;
    }
    ll tmp = 9;
    cout << 989;
    for(int i = 4; i <= n; i++){
        tmp++;
        cout << tmp%10;
    }
    cout << endl;


}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
