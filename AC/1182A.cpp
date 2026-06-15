#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    int n; cin >> n;
    if(n&1) cout << 0 << ln;
    else cout << (1<<(n/2)) << ln;
}
int main(){
    IO
    Solve();
    return 0;
}

