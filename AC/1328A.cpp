#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        if (a[i][0] % a[i][1] == 0) cout << 0 << endl;
        else cout << (a[i][1] - a[i][0]%a[i][1]) << endl;
    }
    return 0;
}

