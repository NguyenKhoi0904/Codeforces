#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    map<int,int> m2;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> temp = a;
    sort(temp.begin(), temp.end());

    map<int, set<int>> m;
    for(int i = 0; i < n; i++){
        m[i%k].insert(a[i]);
    }

    for(int i = 0; i < n; i++){
        auto check = m[i%k];
        if(check.find(temp[i]) == check.end()){
            m2[i%k]++;
        }
    }
    if(m2.size() == 0){
        cout << 0 << endl;
        return;
    }
    int c = 0;
    for(auto e : m2){
        if(e.second == 1) c++;
        else c += 100;
    }
    if(c == 2){
        cout << 1 << endl;
    }else cout << -1 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

