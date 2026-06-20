#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
        sort(a[i].begin(), a[i].end());
    }
    for (int i = 0; i < n; i++)
        cout << a[i][1] << endl;
    return 0;
}
