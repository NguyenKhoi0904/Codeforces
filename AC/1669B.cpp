#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int tmp;
        unordered_map<int,int> unm;
        for (int i = 0; i < n; i++){
            cin >> tmp;
            unm[tmp]++;
        }
        bool flag = false;
        for(auto &pair:unm){
            if (pair.second >= 3){
                cout << pair.first << endl;
                flag = true;
                break;
            }
        }
        if (!flag) cout << -1 << endl;
    }
    return 0;
}


