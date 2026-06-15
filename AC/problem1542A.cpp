#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    vector<int> a(2*n);
    for (int i = 0; i < 2*n; i++)
        cin >> a[i];
    int c=0,l= 0;
    for(int i = 0; i < 2*n; i++){
        if (a[i]%2 == 0) c++;
        else l++;
    }
    if (c==l) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    return 0;
}

