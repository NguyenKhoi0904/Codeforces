#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int walk = 0;
        int tmp;
        for(int i = 1; i < n; i++){
            tmp = a[i] - a[i-1];
            walk += tmp/120;
        }
        if (walk == 2) cout << "YES" << endl;
        else{
            walk += max((1440-a[n-1]),a[0]-0)/120;
            if (walk >= 2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
