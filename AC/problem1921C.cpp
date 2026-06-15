#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int n; cin >> n;
    long long f,a,b; cin >> f >> a >> b;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    f = f - min((v[0]-0)*a, b);
    for(int i = 1; i < n && f > 0; i++){
        f = f - min((v[i]-v[i-1])*a, b);
    }
    if (f > 0) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

