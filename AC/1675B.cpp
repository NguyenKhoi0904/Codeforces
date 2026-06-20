#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int step = 0;
    for(int i = n-2; i >=0; i--){
        while(a[i] >= a[i+1] && a[i] > 0){
            a[i] = a[i]/2;
            step++;
        }
        if (a[i] == a[i+1]){
            cout << -1 << endl;
            return;
        }
    }
    cout << step << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
