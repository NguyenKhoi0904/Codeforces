#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum = accumulate(a.begin(), a.end(), 0);
        if (sum % 2 != 0){
            cout << "NO" << endl;
        }else{
            int n_1 = 0;
            int n_2 = 0;
            for(int i = 0; i < n; i++){
                if (a[i] == 1) n_1++;
                else n_2++;
            }
            if (n_1 == 0 && n_2 % 2 != 0) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}
