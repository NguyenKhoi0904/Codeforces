#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> k(n);
    for (int i = 0; i < n; i++)
        cin >> k[i];
    vector<vector<int>> m(n);
    for(int i = 0; i < n; i++){
        m[i].resize(k[i]);
        for(int j = 0; j < k[i]; j++){
            cin >> m[i][j];
        }
    }

    int mi = INT_MAX;
    for(int i = 0; i < n; i++){
        int tmp = 0;
        for(int j = 0; j < k[i]; j++){
            tmp += 5*m[i][j];
        }
        tmp += 15*k[i];
        mi = min(mi, tmp);
    }
    cout << mi << endl;
    return 0;
}

