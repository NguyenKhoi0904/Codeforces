#include <iostream>
typedef long long ll;
using namespace std;
void Solve(){
    int n,k; cin >> n >> k;
    if(k < n){
        cout << k << "\n";
        return;
    }
//    cout << k << endl;
    int ans = (k-1)/(n-1);
    cout << ans + k << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
