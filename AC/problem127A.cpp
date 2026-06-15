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
    double sum = 0;
    for(int i = 1; i < n; i++){
        sum += sqrt(1.0*pow(a[i][0]-a[i-1][0],2) + 1.0*pow(a[i][1]-a[i-1][1],2));
    }
    sum = 1.0*sum/50;
    cout << fixed << setprecision(6) << sum*k << endl;
    return 0;
}
