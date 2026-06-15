#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int n,k; cin >> n >> k;
    if (n < k) cout << k-n << endl;
    else if((n%2==0 && k%2==0)||(n%2!=0 && k%2 != 0)) cout << 0 << endl;
    else cout << 1 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

