#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
// PROBLEM A
/*
void Solve(){
    int a,b; cin >> a >> b;
    cout << b-a << ln;
}
*/

// PROBLEM B
/*
void Solve(){
    int n; cin >> n;
    vector<vector<char>> v(n, vector<char>(4));
    vector<int> ans;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            cin >> v[i][j];
            if(v[i][j] == '#') ans.push_back(j+1);
        }
    }
    for(int i = ans.size()-1; i >= 0; i--) cout << ans[i] << " ";
    cout << endl;
}
*/

// PROBLEM C
ll roundUp(ll v, ll d) {
    return (v + d - 1) / d;
}
void Solve(){
    ll x,y,k; cin >> x >> y >> k;
    ll moveX = roundUp(x,k), moveY = roundUp(y,k);
    if(x <= y){
        cout << max(moveX,moveY)*2 << ln;
        return;
    }
    cout << (moveX==moveY?max(moveX,moveY)*2:max(moveX,moveY)*2-1) << ln;
}

// PROBLEM D -- chưa xong
/*
void Solve(){
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++) cin >> v.first >> v.second;
}
*/
int main(){
    IO
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

