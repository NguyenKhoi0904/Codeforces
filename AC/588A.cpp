#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    ll sum = a[0][0]*a[0][1], min_v = a[0][1];
    for(int i = 1; i < n; i++){
        if(a[i][1] < min_v){
            min_v = a[i][1];
            sum += min_v*a[i][0];
        }else{
            sum += min_v*a[i][0];
        }
    }
    cout << sum << endl;
    return 0;
}
