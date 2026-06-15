#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define int long long

using namespace std;

void Solve(){
    int n,x; cin >> n >> x;
    int tmp = 0;
    int s = 0;
    for(int i = 0; i < n-1; i++){
        if((x | i) <= x){
            cout << i << " ";
            tmp = i;
            s |= i;
        }else{
            cout << x << " ";
            s |= x;
        }
    }
    if((s | (n-1)) == x){
        cout << n-1 << ln;
    }
    else{
        cout << x << ln;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) Solve();
    return 0;
}


//0 1 2 3 3 3 3
//OR
