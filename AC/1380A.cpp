#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 1; i < n-1; i++){
        bool flag1 = false, flag2 = false;
        vector<int> tmp(2);
        for(int j = i-1; j >= 0; j--){
            if (a[j] < a[i]){
                tmp[0] = j;
                flag1 = true;
                break;
            }
        }
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                tmp[1] = j;
                flag2 = true;
                break;
            }
        }
        if(flag1 && flag2){
            cout << "YES\n";
            cout << tmp[0]+1 << " " << i+1 << " " << tmp[1]+1 << endl;
            return;
        }
    }
    cout << "NO\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
