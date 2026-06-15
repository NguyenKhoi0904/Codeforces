#include <iostream>
#include <vector>
#define ln "\n"
using namespace std;

// PROBLEM A
/*
void Solve(){
    int n; cin >> n;
    int ans = 0;
    while(n > 0){
        ans += n%10;
        n/=10;
    }
    cout << ans << ln;
}
*/

// PROBLEM B
/*
void Solve(){
    int a1,a2,b1,b2; cin >> a1 >> a2 >> b1 >> b2;
    vector<pair<int,int>> suneet = {{a1,a2},{a2,a1}};
    vector<pair<int,int>> slavic = {{b1,b2},{b2,b1}};
    int ans = 0;
    for(auto &su : suneet){
        for(auto &sl : slavic){
            int suneet_win = 0;
            int slavic_win = 0;

            if(su.first > sl.first) suneet_win++;
            else if(su.first < sl.first) slavic_win++;

            if(su.second > sl.second) suneet_win++;
            else if(su.second < sl.second) slavic_win++;

            if(suneet_win > slavic_win) ans++;
        }
    }
    cout << ans << ln;
}
*/

// PROBLEM C
/*
void Solve(){
    int n,s,m; cin >> n >> s >> m;
    vector<pair<int,int>> a(n);
    for(int i = 0;i < n; i++) cin >> a[i].first >> a[i].second;
    for(int i = 1; i < n; i++){
        if((a[i].first - a[i-1].second) >= s){
            cout << "YES\n";
            return;
        }
    }
    if((a[0].first - 0) >= s){
        cout << "YES\n";
        return;
    }
    if((m - a[n-1].second) >= s){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}
*/

// PROBLEM D

void Solve(){
    string s,t; cin >> s >> t;
    if(t.size() > s.size()){
        cout << "NO\n";
        return;
    }
    int c = 0;
    bool flag = true;
    for(int i = 0; i < )
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

