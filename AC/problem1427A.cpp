#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> a(n);
    ll total = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        total += a[i];
    }
    if(total == 0){
        cout << "NO\n";
    }else{
        sort(a.begin(), a.end());
        ll sum = 0;
        bool flag = true;
        for(int i =  0; i < n; i++){
            sum += a[i];
            if(sum == 0){
                swap(a[i], a[n-1]);
                break;
            }
        }
        sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
            if (sum == 0){
                flag = false;
            }
        }
        if(flag){
            cout << "YES\n";
            for(int i = 0; i < n; i++){
                cout  << a[i] << " ";
            }
            cout << endl;
            return;
        }
        sum = 0;
        sort(a.begin(), a.end(), greater<>());
        for(int i = 0; i < n; i++){
            sum += a[i];
            if(sum == 0){
                swap(a[i], a[n-1]);
            }
        }
        cout << "YES\n";
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
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
