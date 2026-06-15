#include <bits/stdc++.h>

#define ln "\n"
#define el cout << ln;
#define FOR0(n) for(int i = 0; i < n; i++)
#define FOR1(n) for(int i = 1; i <= n; i++)

using namespace std;
const int maxn = 1e5;
int a[maxn], l[maxn];

void Solve(){
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> l[i];
    int suffix[n];
    suffix[n-1] = 1;
    set<int> s; s.insert(a[n-1]);
    for(int i = n-2; i >= 0; i--){
        if(s.find(a[i]) == s.end()){
            suffix[i] = suffix[i+1] + 1;
            s.insert(a[i]);
        }
        else{
            suffix[i] = suffix[i+1];
        }
    }
   for(int i = 0; i < m; i++){
        cout << suffix[l[i]-1] << ln;
   }
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solve();
    return 0;
}
/*
10 10
1 2 3 4 1 2 3 4 100000 99999
1
2
3
4
5
6
7
8
9
10
*/
