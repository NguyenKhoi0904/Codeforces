#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m; cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    bool flag = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y'){
                flag = false;
                break;
            }
        }
    }
    if (flag) cout << "#Black&White" << endl;
    else cout << "#Color " << endl;
    return 0;
}
