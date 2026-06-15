#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    bool flag = false;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > 1) flag = true;
    }
    int c0 = count(a.begin(), a.end(), 0);
    int c1 = count(a.begin(), a.end(), 1);
    if(c0 > (n-c0)+1){
        if(c1 == 0)
            cout << 1 << endl;
        else if(flag) cout << 1 << endl;
        else cout << 2 << endl;
    }else{
        cout << 0 << endl;
    }

}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

