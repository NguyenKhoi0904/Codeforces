#include <bits/stdc++.h>

using namespace std;
int main(){
    map<int,int> m;
    int n; cin >> n;
    int ori_n = n;
    while(n--){
        int r; cin >> r;
        for (int i = 0; i < r; i++){
            int tmp; cin >> tmp;
            m[tmp]++;
        }
    }
    for (auto &e: m){
        if (e.second == ori_n) cout << e.first << " ";
    }
    return 0;
}

