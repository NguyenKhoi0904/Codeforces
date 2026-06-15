#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    long long sum = 0;
    for (int i = 0, j = n-1; i < n && j >= 0; i++,j--){
        sum += a[i][i]+a[i][j];
    }
    int tmp = n/2;
    for (int i = 0; i < n; i++){
        sum += a[tmp][i] + a[i][tmp];
    }
    cout << sum - a[tmp][tmp]*3 << endl;
    return 0;
}


