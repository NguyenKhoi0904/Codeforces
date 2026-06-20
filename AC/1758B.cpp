#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    if(n % 2 == 1){
        for(int i = 0; i < n; i++)
            cout << 1 << " ";
        cout << endl;
    }else{
        cout << 2 <<  " " << 6 << " ";
        for(int i = 0; i < n-2; i++)
            cout << 4 << " ";
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
