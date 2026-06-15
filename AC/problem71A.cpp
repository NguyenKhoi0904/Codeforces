#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<string> v;
    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        int l = s.size();
        if (l > 10){
            s = s[0]+ to_string(l-2) +s[l-1];
            v.push_back(s);
        }else{
            v.push_back(s);
        }
    }
    for (int i = 0; i < n; i++){
        cout << v[i] << endl;
    }
    return 0;
}

