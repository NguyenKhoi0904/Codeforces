#include <bits/stdc++.h>

using namespace std;

void Solve(vector<char> alphabet){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<char,int> m;
    string ans = "";
    for(int i = 0; i < n; i++){
        if (a[i] == 0){
            ans += alphabet[0];
            m[alphabet[0]]++;
            alphabet.erase(alphabet.begin()+0);
        }else{
            for(auto &e: m){
                if (e.second == a[i]){
                    ans += e.first;
                    e.second++;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}
int main(){
    int t; cin >> t;
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                                  'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                                  'u', 'v', 'w', 'x', 'y', 'z'};
    while(t--){
        Solve(alphabet);
    }
    return 0;
}
