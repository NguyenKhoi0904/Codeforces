#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int xa,ya; cin >> xa >> ya;
    int xb,yb; cin >> xb >> yb;
    int xc,yc; cin >> xc >> yc;
    int dAB = abs(xa-xb) + abs(ya-yb);
    int dAC = abs(xa-xc) + abs(ya-yc);
    int dBC = abs(xb-xc) + abs(yb-yc);
    cout << (dAB+dAC-dBC)/2 + 1 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

