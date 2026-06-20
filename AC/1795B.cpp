#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n,k; cin >> n >> k;
    vector<pair<int,int>> v(n);
    map<int,int> m;
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
        for(int j = v[i].first; j <= v[i].second; j++){
            m[j]++;
        }
    }

    bool flag = true;
    for(int i = 1; i <= 50; i++){
        if(i != k && m[i] >= m[k]){
            flag = false;
            int co = 0;
            for(auto e : v){
                if(e.second >= i && e.first <= i && (e.second < k || e.first > k)){
                    co++;
                }
            }
            if(co >= (m[i]-m[k]+1)){
                flag = true;
            }else{
                flag = false;
                break;
            }
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
