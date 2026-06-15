#include <bits/stdc++.h>

using namespace std;
void Solve(){
    int n,x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<bool> flag(500);
    fill(flag.begin(), flag.end(),false);
    for(int i = 0; i < n; i++){
        flag[a[i]] = true;
    }
    int i;
    for(i = 1; x >= 0; i++){
        if(!flag[i]) x--;
    }
    cout << i-2 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

