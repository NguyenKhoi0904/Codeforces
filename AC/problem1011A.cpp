#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    string s; cin >> s;
    sort(s.begin(), s.end());
    vector<char> ans;
    ans.push_back(s[0]);
    for(int i = 1; i < n; i++){
        if(ans.size() == k) break;
        if(s[i] - ans.back() >= 2){
            ans.push_back(s[i]);
        }
    }
    if(ans.size() < k){
        cout << -1 << endl;
    }else{
        int tmp = 0;
        for(char c: ans){
            tmp += c - 'a'+1;
        }
        cout << tmp << endl;
    }
    return 0;
}

