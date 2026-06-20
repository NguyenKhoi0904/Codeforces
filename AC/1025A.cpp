#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    if(n==1){
        cout << "YES\n";
        return 0;
    }
    vector<int> alphabet(26);
    for(int i = 0; i < n; i++){
        alphabet[s[i]-'a']++;
    }
    for(int i = 0; i < 26;i++){
        if(alphabet[i]>= 2){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}

