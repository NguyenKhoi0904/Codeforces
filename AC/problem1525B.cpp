#include <bits/stdc++.h>

using namespace std;
bool Is_sorted(vector<int> &arr){
    return is_sorted(arr.begin(), arr.end());
}
void Solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if(Is_sorted(a)){
        cout << 0 << endl;
    }else{
        int mini = *min_element(a.begin(),a.end());
        int maxi = *max_element(a.begin(),a.end());
        if(mini == a[0] || maxi == a[n-1]) cout << 1 << endl;
        else if (mini == a[n-1] && maxi == a[0]) cout << 3 << endl;
        else cout << 2 << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

