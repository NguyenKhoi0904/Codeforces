#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(b.begin(), b.end());
        while(k--){
            if (a[0] < b[n-1]){
                swap(a[0],b[n-1]);
                sort(a.begin(), a.end());
                sort(b.begin(), b.end());
            }
        }
        int sum = 0;
        for (int e: a)
            sum += e;
        cout << sum << endl;
    }
    return 0;
}



