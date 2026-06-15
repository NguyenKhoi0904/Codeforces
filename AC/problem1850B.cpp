#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<vector<int>> a(n, vector<int>(2));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 2; j++){
                cin >> a[i][j];
            }
        }
        int winner = 0, quality = -1;
        for(int i = 0; i < n; i++){
            if(a[i][0] <= 10){
                if (a[i][1] > quality){
                    quality = a[i][1];
                    winner = i+1;
                }
            }
        }
        cout << winner << endl;
    }
    return 0;
}
