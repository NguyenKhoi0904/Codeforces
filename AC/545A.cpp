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

    vector<int> ans;
    vector<int> row(n,0);
    vector<int> col(n,0);
    // Find row
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == -1) continue;
            if(a[i][j] == 1 || a[i][j] == 3) row[i] = 1;
        }
    }
    // Find col
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[j][i] == -1) continue;
            if(a[j][i] == 2 || a[j][i] == 3) col[i] = 1;
        }
    }
    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 0 || a[i][j] == -1){
                if (row[i]==0 && col[j] == 0){
                    c++;
                    ans.push_back(i+1);
                    break;
                }
            }
        }
    }
    cout << c << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
