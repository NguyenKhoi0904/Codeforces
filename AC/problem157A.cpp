#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<int> dong(n);
    vector<int> cot(n);
    int sum;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            sum += a[i][j];
        }
        dong[i] = sum;
    }
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < n; j++){
            sum += a[j][i];
        }
        cot[i] = sum;
    }
    int win = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (dong[i] < cot[j]) win++;
        }
    }
    cout << win << endl;
    return 0;
}
