#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int a,b,n; cin >> a >> b >> n;
    switch(n%3){
    case 0:
        cout << a << endl;
        break;
    case 1:
        cout << b << endl;
        break;
    default:
        cout << (a^b) << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
