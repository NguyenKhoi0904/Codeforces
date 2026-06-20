#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    int n,m,k; cin >> n >> m >> k;
    if(k == 1){
        cout << 1 << ln;
        return;
    }
    if(k >= max(n,m)){
        cout << n * m << ln;
        return;
    }
    if(k >= min(n,m)){
        cout << k * min(n,m) << ln;
        return;
    }
    cout << k*k << ln;
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

