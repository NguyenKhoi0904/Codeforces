#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int n,H,M; cin >> n >> H >> M;
    vector<vector<int>> a(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    int tmp = 24*60, time = 60*H+M;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            int t = 60*a[i][0]+a[i][1]-time;
            if (t < 0) t = 24*60 + t;
            tmp = min(tmp,t);
        }
    }
    cout << tmp/60 << " " << tmp%60 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
