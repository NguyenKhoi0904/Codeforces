#include <iostream>
#include <vector>
#include <algorithm>

#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define ln "\n"
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 1; i < n-1; i++){
        if(v[i-1] > 0){
            v[i] = v[i]-2*v[i-1];
            v[i+1] = v[i+1]-v[i-1];
            v[i-1] = 0;
        }
    }
    bool flag = true;
    for(int i = 0; i < n; i++){
        if(v[i] != 0){
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
