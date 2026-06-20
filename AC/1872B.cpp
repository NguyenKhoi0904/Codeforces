#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
//    sort(a.begin(), a.end());
    int k = INT_MAX;
    for(int i = 0; i < n; i++){
        k = min(k, (a[i][0] + (a[i][1]-1)/2));
    }
    cout << k << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
