#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int odd = 0, even = 0;
    for(int i = 0; i < n; i++){
        if (a[i] % 2 == 0) even++;
        else odd++;
    }
    if((odd != 0 && even == 0) || (odd == 0 && even != 0))
        cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
