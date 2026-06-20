#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];
    }
    int c = 0;
    for (int i = 0; i < n; i++){
        if (a[i][1] - a[i][0] >= 2)
            c++;
    }
    cout << c << endl;
    return 0;
}

