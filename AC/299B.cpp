#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    string s; cin >> s;
    bool flag = true;
    for(int i = 0; i < n-1;){
        int tmp =  i;
        for (int j = 1; j <= k; j++){
            if (s[i+j] == '.'){
                i+=j;
                break;
            }
        }
        if (tmp == i){
            flag = false;
            break;
        }
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

