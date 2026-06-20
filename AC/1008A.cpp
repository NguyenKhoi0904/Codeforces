#include <bits/stdc++.h>

using namespace std;
int main(){
    string vowels = "ueoai";
    string s; cin >> s;
    int n = s.size();
    if(s[n-1] != 'n' && vowels.find(s[n-1])==string::npos){
        cout << "NO\n";
        return 0;
    }
    for(int i = 0; i < n; i++){
        if(s[i] != 'n' && vowels.find(s[i])==string::npos){
            if (vowels.find(s[i+1])==string::npos){
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}

