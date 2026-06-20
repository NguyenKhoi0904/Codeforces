#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int n,k; cin >> n >> k;
    vector<int> arr(26,0);
    string s; cin >> s;
    for(int i = 0; i < n; i++){
        arr[s[i]-'a']++;
    }
    string ans;
    for(int i = 1; i <= k; i++){
        int l = n/k;
        for(char c = 'a'; c <= 'z'; c++){
            if(l <= 0){
                ans += c;
                break;
            }
            l--;
            if(arr[c - 'a']){
                arr[c - 'a']--;
            }else{
                ans += c;
                break;
            }
        }
    }
    cout << ans << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

