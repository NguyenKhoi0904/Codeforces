#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int min_v = a[0];
        int candies = 0;
        for(int i = 1; i < n; i++){
            candies += a[i]-min_v;
        }
        cout << candies << endl;
    }
    return 0;
}


