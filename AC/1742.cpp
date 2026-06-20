#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<vector<int>> a(n,vector<int>(3));
    for (int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++)  cin >> a[i][j];
    }
    for (int i = 0; i < n; i++){
        if ((a[i][0] + a[i][1] == a[i][2]) || (abs(a[i][0] - a[i][1])== a[i][2])) cout << "YES"<< endl;
        else cout << "NO" << endl;
    }
    return 0;
}

