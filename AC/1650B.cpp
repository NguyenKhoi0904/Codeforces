#include <bits/stdc++.h>

using namespace std;
void Solve(){
    long long l,r,a; cin >> l >> r >> a;
    int tmp = r - r%a -1;
    if (tmp >= l){
        cout << max(r/a + r%a, tmp/a + tmp%a) << endl;
    }else cout << r/a + r%a << endl;

}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

