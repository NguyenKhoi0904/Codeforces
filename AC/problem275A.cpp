#include <bits/stdc++.h>

using namespace std;
int main(){
    int n = 3;
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    vector<vector<int>> b(n+2, vector<int>(n+2,1));
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] % 2 != 0){
                if (b[i+1][j+1] == 1) b[i+1][j+1] = 0;
                else b[i+1][j+1] = 1;

                if (b[i+1-1][j+1] == 1) b[i+1-1][j+1] = 0;
                else b[i+1-1][j+1] = 1;

                if (b[i+1][j+1+1] == 1) b[i+1][j+1+1] = 0;
                else b[i+1][j+1+1] = 1;

                if (b[i+1+1][j+1] == 1) b[i+1+1][j+1] = 0;
                else b[i+1+1][j+1] = 1;

                if (b[i+1][j+1-1] == 1) b[i+1][j+1-1] = 0;
                else b[i+1][j+1-1] = 1;
            }
        }
    }

    for(int i = 1; i < n+1; i++){
        for (int j = 1; j < n+1; j++){
            cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}
