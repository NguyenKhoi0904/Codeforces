#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int p1,p2,p3; cin >> p1 >> p2 >> p3;
    if ((p1+p2+p3) % 2 != 0){
        cout << -1 << endl;
        return;
    }
    cout << min((p1+p2+p3)/2, p1+p2) << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
