#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(4));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            cin >> a[i][j];
        }
    }
    int c;
    for(int i = 0; i < n; i++){
        c = 0;
        for(int j = 1; j < 4; j++){
            if (a[i][j] > a[i][0])  c++;
        }
        cout << c << endl;
    }
    return 0;
}
