#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int a,b,c; cin >> a >> b >> c;
    int ans = abs(a-b) + abs(a-c) + abs(b-c);
    cout << (ans<=4?0:ans-4) << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
