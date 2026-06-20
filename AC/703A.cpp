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

    int m_win = 0, c_win = 0;
    for (int i = 0; i < n; i++){
        if (a[i][0] > a[i][1])  m_win++;
        else if (a[i][0] < a[i][1]) c_win++;
    }
    if (m_win > c_win) cout << "Mishka" << endl;
    else if (m_win < c_win) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    return 0;
}
