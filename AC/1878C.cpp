#include <bits/stdc++.h>

using namespace std;
void Solve(){
    long long n,k; cin >> n >> k;
    long long x; cin >> x;
    long long minimum = 0, maximum = 0;
    minimum = (k*(k+1))/2;
    maximum = ((n*(n+1))-((n-k)*(n-k+1)))/2;
    if (minimum <= x && x <= maximum) cout << "YES\n";
    else cout << "NO\n";

}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

