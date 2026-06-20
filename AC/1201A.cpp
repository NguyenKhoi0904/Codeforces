#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m; cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int ans = 0;
    for(int i = 0; i < m; i++){
        map<char,int> m;
        for(int j = 0; j < n; j++){
            m[a[j][i]]++;
        }
        int ma = -1;
        for(auto e: m)
            ma = max(ma,e.second);
        ans += (ma*b[i]);
    }
    cout << ans << endl;
    return 0;
}

