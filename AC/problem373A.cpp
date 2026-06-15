#include <bits/stdc++.h>

using namespace std;
int main(){
    int k, n = 4; cin >> k;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<char,int> m;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(a[i][j] != '.'){
                m[a[i][j]]++;
            }
        }
        for(auto &e : m){
            if (e.second > 2*k){
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}

