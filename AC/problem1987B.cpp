#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
#define ln "\n"
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<int> tmp;
    ll max_v = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] < max_v){
            tmp.push_back(max_v - v[i]);
        }else{
            max_v = v[i];
        }
    }
    sort(tmp.begin(), tmp.end(), greater<int>());
    ll ans = 0, t = 0;
    for(int i = tmp.size()-1; i >= 0; i--){
        if(t == tmp[i]){
            tmp.pop_back();
            continue;
        }
        ans += (tmp[i]-t)*(tmp.size()+1);
        t += (tmp[i]-t);
        tmp.pop_back();
    }
    cout << ans << ln;
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

/*
1
7
6 3 0 7 1 2 9
*/
