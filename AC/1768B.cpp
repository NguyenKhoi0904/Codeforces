#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int num = 1;
    int total = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == num){
            num++;
        }else{
            total++;
        }
    }
    int ans = (total+k-1)/k;
    cout << ans << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

