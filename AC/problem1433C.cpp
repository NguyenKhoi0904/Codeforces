#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m = *max_element(a.begin(),a.end());
    a.insert(a.begin()+0,INT_MAX);
    a.push_back(INT_MAX);

    for(int i = 1; i <= n; i++){
        if (a[i] == m && (a[i] > a[i-1] || a[i] > a[i+1])){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
            Solve();
    }
    return 0;
}
