#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    ll x1,p1; cin >> x1 >> p1;
    ll x2,p2; cin >> x2 >> p2;
    int m = min(p1,p2);
    p1 -= m;
    p2 -= m;
    if(p1 >= 7){
        cout << ">\n";
        return;
    }
    if(p2 >= 7){
        cout << "<\n";
        return;
    }
    x1 = x1*pow(10,p1);
    x2 = x2*pow(10,p2);
    if (x1 == x2) cout << "=\n";
    else if (x1 < x2) cout << "<\n";
    else cout << ">\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
