#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s,t; cin >> s >> t;
        unordered_map<char,int> unms, unmt;
        for(char e : s)
            unms[e]++;
        for(char e : t)
            unmt[e]++;
        int i = 0, j = 0;
        while(i < s.size() && j < t.size()){
            if(s[i] == t[j]){
                if(unms[s[i]] < unmt[t[j]]){
                    break;
                }
                if(unms[s[i]] == unmt[t[j]]){
                    unmt[t[j]]--;
                    j++;
                }
            }
            unms[s[i]]--;
            i++;
        }
        if(j ==  t.size()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

