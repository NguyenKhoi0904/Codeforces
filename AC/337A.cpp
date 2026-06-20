#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m; cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    int r = INT_MAX;
    if (n == m){
        r = min(r, a[m-1]-a[0]);
    }else{
        for(int i = 0; i < m-n+1; i++){
            r = min(r,a[i+n-1]-a[i]);
        }
    }
    cout << r << endl;
    return 0;
}

