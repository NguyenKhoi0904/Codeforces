#include <iostream>
#include <vector>
#include <algorithm>

#define ln "\n"
#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

// PROBLEM 2001A
/*
void Solve(){
    int n; cin >> n;
    vector<int> tmp(101,0);
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        tmp[t]++;
    }
    int a = *max_element(tmp.begin(), tmp.end());
    cout << n - a << ln;
}
*/

// PROBLEM 2001B
/*
void Solve(){
    int n; cin >> n;
    if(n % 2 == 0){
        cout << -1 << ln;
        return;
    }
    for(int i = 1; i <= n; i+=2) cout << i << " ";
    for(int i = 2; i <= n; i+=2) cout << i << " ";
    cout << ln;
}
*/

// PROBLEM 2001C
void Solve(){
    int n; cin >> n;
    int tmp = n;
    while(tmp > 1){
        int v; cin >> v;
        tmp--;
    }
}
int main(){
    IO;
    int t; cin >> t;
    while(t--) Solve();
    return 0;
}
