#include <bits/stdc++.h>

using namespace std;
void Solve(){
    long long a,b,c,d; cin >> a >> b >> c >> d;
    if (a*d == b*c) {
        cout << 0 << endl;
        return;
    }
    if( (a!= 0 && ((b*c) % (a*d) == 0)) || (c != 0 &&((a*d) % (b*c) == 0))) cout << 1 << endl;
    else cout << 2 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

