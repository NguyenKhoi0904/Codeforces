#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n,k; cin >> n >> k;
    vector<vector<char>> vec(n, vector<char>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> vec[i][j];
        }
    }

    int tmp = n/k;
    vector<vector<char>> a(tmp, vector<char>(tmp));
    int x = 0;
    for(int i = 0; i < n; i+=k){
        int y = 0;
        for(int j = 0; j < n; j+=k){
            a[x][y] = vec[i][j];
            y++;
        }
        x++;
    }

    for(int i = 0; i < tmp; i++){
        for(int j = 0; j < tmp; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
