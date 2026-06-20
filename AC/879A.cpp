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
    int day = 0, c = 0;
    for(int i = 0; i < n; i++){
        if (day < a[i][0]){
            day = a[i][0];
        }else if (day >= a[i][0]){
            int tmp = a[i][0];
            while(day >= tmp){
                tmp += a[i][1];
            }
            day = tmp;
        }
    }
    cout << day << endl;
    return 0;
}
