#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
//void Solve(){
//    string a,b; cin >> a >> b;
//    vector<int> vec(26,0);
//    for(int i = 0; i < b.size(); i++) vec[b[i] - 'a']++;
//    int c = 0;
//    int na = a.size();
//    for(int i = 0; i < na; i++){
//        if(vec[a[i] - 'a'] > 0){
//            c++;
//            vec[a[i] - 'a']--;
//        }
//    }
//    cout << a.size() + b.size() - c << endl;
//}

void Solve(){
    string a,b; cin >> a >> b;
    int n = a.size(), m = b.size();
    int ans = n + m;
    for(int i = 0; i < m; i++){
        int tmp = i;
        for(int j = 0; j < n; j++){
            if(a[j] == b[tmp] && tmp < m) tmp++;
        }
        ans = min(ans, n + m - (tmp - i));
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
