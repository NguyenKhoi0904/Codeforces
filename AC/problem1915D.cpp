#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int> a;
    for(int i = 0; i < n; i++){
        if (s[i] == 'a' || s[i] == 'e')
            a.push_back(i);
    }
    vector<int> insert_poss;
    for(int i = 1; i < a.size(); i++){
        int c = 0;
        for(int j = a[i-1]; j < a[i]; j++){
            if (s[j] != 'a' && s[j] != 'e')
                c++;
        }
        if (c == 1) insert_poss.push_back(a[i-1]+1);
        else insert_poss.push_back(a[i-1]+2);
    }
    for(int i = insert_poss.size()-1; i >= 0 ; i--){
        s.insert(s.begin() + insert_poss[i],'.');
    }
    cout << s << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

