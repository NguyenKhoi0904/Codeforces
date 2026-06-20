#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int tmp = -1;
        for (int i = 1; i < n; i++){
            if (a[i] < a[i-1]){
                tmp = i;
                break;
            }
        }
        tmp = tmp - 0;
        while(tmp>0){
            a.push_back(a[0]);
            a.erase(a.begin()+0);
            tmp--;
        }
        bool flag = true;
        for (int i = 1; i < n; i++){
            if (a[i] < a[i-1]){
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
