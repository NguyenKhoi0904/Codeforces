#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int max_k = INT_MAX;
        for(int i = 0; i < n-1; i++){
            max_k = min(max_k,max(a[i],a[i+1]));
        }
        cout << max_k-1 << endl;
    }
    return 0;
}



