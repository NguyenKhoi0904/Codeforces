#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >>  n;
    int p = 0, m = -1;
    vector<vector<int>> v(n, vector<int>(2));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++)
            cin >> v[i][j];
    }
    for (int i = 0; i < n; i++){
        p = p - v[i][0] + v[i][1];
        if (p > m)  m = p;
    }
    cout << m << endl;
    return 0;
}

