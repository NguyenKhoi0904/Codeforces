#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int n = s.size();
    vector<string> ans;
    ans.push_back(s);
    while(true){
        bool flag = true;
        char tmp = s[n-1];
        s.erase(s.begin() + (n-1));
        s.insert(s.begin() + 0, tmp);
        for(string e : ans){
            if (e == s){
                flag = false;
                break;
            }
        }
        if(flag) ans.push_back(s);
        else break;
    }
    cout << ans.size() << endl;
    return 0;
}

