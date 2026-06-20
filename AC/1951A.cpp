#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    string s; cin >> s;
    int c = 0;
    if(s == "1"){
        cout << "NO\n";
        return;
    }
    if(s == "0"){
        cout << "YES\n";
        return;
    }

    if (s == "00"){
        cout << "YES\n";
        return;
    }
    if (s == "11"){
        cout << "NO\n";
        return;
    }

    vector<int> tmp;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            c++;
            tmp.push_back(i);
        }
    }
    if(c == 2 && (tmp[1]-tmp[0] == 1)){
        cout << "NO\n";
        return;
    }
    if(c % 2 != 0){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
