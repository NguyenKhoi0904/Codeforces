#include <bits/stdc++.h>


#define ln "\n"
#define int long long
using namespace std;

int n;

bool check_squared_number(int n){
    int c = (int)sqrt(n);
    return c*c == n;
}

void Solve(){
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> eratosthenes(1e7+5, 1);
    eratosthenes[0] = eratosthenes[1] = 0;
    set<int> s;
    for(int i = 2; i <= sqrt(1e7+5); i++){
        if(eratosthenes[i]){
            for(int j = i*i; j <= 1e7+5; j += i){
                eratosthenes[j] = 0;
            }
        }
    }
    for(int i = 2; i <= 1e7+5; i++){
        if(eratosthenes[i]) s.insert(i*i);
    }
    for(int i = 0; i < n; i++){
        if(s.find(a[i]) != s.end()) cout << "YES\n";
        else cout << "NO\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}
/*
1
999966000289
*/
