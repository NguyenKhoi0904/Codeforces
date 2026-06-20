#include <bits/stdc++.h>
#define dl endl
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    if(n == 3){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if(n % 2 == 0){
        int tmp = 1;
        for(int i = 0; i < n; i++){
            cout << tmp << " ";
            tmp *= -1;
        }
        cout << endl;
    }else{
        int tmp = (n-1)/2;
        int temp = tmp - 1;
        tmp *= -1;
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(flag){
                cout << temp << " ";
                flag = false;
            }else{
                cout << tmp << " ";
                flag = true;
            }
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
