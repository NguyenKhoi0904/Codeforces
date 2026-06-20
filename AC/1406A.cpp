#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    vector<int> a(101);
    int n; cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int b; cin >> b;
        a[b]++;
    }
    for(int i = 0; i < 101; i++){
        if(a[i] > 0) a[i]--;
        else{
            sum += i; break;
        }
    }
    for(int i = 0; i < 101; i++){
        if(a[i] > 0) a[i]--;
        else{
            sum += i; break;
        }
    }
    cout << sum << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
