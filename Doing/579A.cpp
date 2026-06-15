#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)

using namespace std;

void Solve(){
    int x; cin >> x;
    int r = 0;
    while(x != 0){
        r = r + (x%2);
        x /= 2;
    }
    cout << r << ln;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}

/*
5
*/
/*
8
*/

