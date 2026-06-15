#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m = INT_MAX;
    for(int i = 0; i < n; i++){
        if (k % a[i] == 0){
            m = min(m, k/a[i]);
        }
    }
    cout << m << endl;
    return 0;
}

