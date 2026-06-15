#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    if(n%2 ==0){
        while(n!=0){
            cout << 1;
            n-=2;
        }
        cout << endl;
    }else{
        n-=3;
        cout << 7;
        while(n!=0){
            cout << 1;
            n-=2;
        }
        cout << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
