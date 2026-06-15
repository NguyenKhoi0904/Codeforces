#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    string ans = "heidi";
    bool flag  = true;
    size_t tmp = 0;
    for (char e : ans){
        tmp = s.find(e,tmp);
        if (tmp != string::npos){
            tmp++;
        }else{
            flag =false;
            break;
        }
    }
    if (flag){
        if (s.size() > ans.size()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }else cout << "NO" << endl;
    return 0;
}

