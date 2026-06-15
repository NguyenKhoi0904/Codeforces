#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i][0] != a[i][1]){
            cout << "rated\n";
            return 0;
        }
    }
    for(int i = 0; i < n-1; i++){
        if(a[i][0] < a[i+1][0]){
            cout << "unrated\n";
            return 0;
        }
    }
    cout << "maybe\n";
    return 0;
}
