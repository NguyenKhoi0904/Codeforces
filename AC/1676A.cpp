#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++){
        int tmp = (a[i][0] - '0') + (a[i][1] - '0') + (a[i][2] - '0');
        int temp = (a[i][3] - '0') + (a[i][4] - '0') + (a[i][5] - '0');
        if(tmp == temp) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

