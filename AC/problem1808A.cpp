#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int l,r; cin >> l >> r;
    int tmp = INT_MIN, m;
    for(int i = l; i <= r; i++){
        string s = to_string(i);
        int maxi = -1, mini = 10;
        for(int j = 0; j < s.size(); j++){
            maxi = max(maxi,s[j]-'0');
            mini = min(mini,s[j]-'0');
        }
        if(maxi - mini == 9){
            cout << i << endl;
            return ;
        }
        if(maxi - mini > tmp) tmp = maxi - mini, m = i;
    }
    cout << m << endl;

}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

