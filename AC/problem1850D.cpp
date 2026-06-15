#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(),a.end());
        int m = -1,c = 0;
        for(int i = 1; i < n; i++){
            if (a[i] - a[i-1] <= k){
                c++;
            }else{
                m = max(m,c);
                c=0;
            }
        }
        m = max(m,c);
        cout << n - m - 1<< endl;
    }
    return 0;
}

