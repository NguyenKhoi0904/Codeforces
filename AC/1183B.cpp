#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int mi = *min_element(a.begin(), a.end());
    mi+=k;
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(abs(a[i]-mi) > k){
            flag = true; break;
        }
    }
    if(!flag) cout << mi << endl;
    else cout << -1 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
