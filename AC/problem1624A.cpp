#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int max_v = a[0], min_v = a[0];
        for (int i = 1; i < n; i++){
            if (a[i] > max_v)   max_v = a[i];
            else if (a[i] < min_v)  min_v = a[i];
        }
        cout << max_v - min_v << endl;
    }
    return 0;
}

