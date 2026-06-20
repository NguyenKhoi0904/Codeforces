#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int n,m,k; cin >> n >> m >> k;
    int x,y; cin >> x >> y;
    vector<vector<int>> a(k, vector<int>(2));
    for(int i = 0; i < k; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    bool flag = true;
    for(int i = 0; i < k; i++){
        if(((abs(x-a[i][0])+abs(y-a[i][1]))%2 ==0)){
            flag = false;
            break;
        }
    }
    if (flag) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

