#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int sw = 0;
        bool flag = true;
        if (s == "cba"){
            cout << "YES" << endl;
            flag = false;
        }
        while (s != "abc" && flag){
            for(int i = 0; i < s.size()-1; i++){
                if (s[i] > s[i+1]){
                    swap(s[i], s[i+1]);
                    sw++;
                }
            }
        }
        if (sw <= 1){
            if (flag) cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}

