#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m = 0;
    int mini = INT_MAX;

    for(int i = 0; i < n-1; i++){
        mini = min(mini,a[i]);
    }
    m = max(m, a[n-1]-mini);
    int maxi = 0;

    for(int i = n-1; i > 0; i--){
        maxi = max(maxi, a[i]);
    }

    m = max(m, maxi-a[0]);
    for(int i = 0; i < n-1; i++){
        m = max(m, a[i]-a[i+1]);
    }

    cout << m << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
