#include <iostream>
#include <vector>
#include <set>

#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    int n,m; cin >> n >> m;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    set<pair<int,int>> v;
    for(int i = 0; i < m; i++){
        int a,b; cin >> a >> b;
        if(b < a) swap(a,b);
        v.insert({a-1, b-1});
    }
//    for(auto e : v) cout << e.first << " " << e.second << ln;
    if(m < 3){
        cout << -1 << ln;
        return;
    }
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
//                cout << i << " " << j << " " << k << ln;
                if(v.find({i,j}) != v.end() &&
                   v.find({i,k}) != v.end() &&
                   v.find({j,k}) != v.end()){
                        ans = min(ans, arr[i] + arr[j] + arr[k]);

                   }

            }
        }
    }
    if(ans == INT_MAX) cout << -1 << ln;
    else cout << ans << ln;
}
int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);

    Solve();
    return 0;
}
/*
4 3
1 2 8 6
1 3
1 4
3 4
*/
