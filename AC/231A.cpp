#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int a[n][3];
    int solution = 0;
    int r;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        r = 0;
        for (int j = 0; j < 3; j++){
            if (a[i][j] == 1)
                r++;
        }
        if (r >= 2) solution++;
    }
    cout << solution << endl;
    return 0;
}

