#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
ll euclid_distance(int x1, int y1, int x2, int y2){
    return 1ll*(x1-x2)*(x1-x2) + 1ll*(y1-y2)*(y1-y2);
}
void Solve(){
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    int xs,ys,xt,yt;
    cin >> xs >> ys >> xt >> yt;
    bool flag = true;
    ll m = euclid_distance(xs,ys,xt,yt);
    for(pair<int,int> e: v){
        if(euclid_distance(e.first, e.second, xt, yt) <= m){
            flag = false;
            break;
        }
    }
    cout << (flag?"YES\n":"NO\n");
}
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

/*
1
1
1000000000 2
1000000000 1 1 1
*/
