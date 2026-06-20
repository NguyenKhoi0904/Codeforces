#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,f,k; cin >> n >> f >> k;
        int favourite;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (i == f-1) favourite = a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        bool yes = false, no = false;
        for (int i = 0; i < k;i++){
            if (a[i] == favourite){
                yes = true;
                break;
            }
        }
        for (int i = k; i < n; i++){
            if (a[i] == favourite){
                no = true;
                break;
            }
        }
        if (yes && no)  cout << "MAYBE" << endl;
        else if (yes) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}


