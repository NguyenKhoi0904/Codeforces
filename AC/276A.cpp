#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }

    int m = INT_MIN,tmp;
    for(int i = 0; i < n; i++){
        if (a[i][1] > k){
            m = max(m, a[i][0] - (a[i][1]-k));
        }else m = max(m, a[i][0]);
    }
    cout << m << endl;
    return 0;
}
