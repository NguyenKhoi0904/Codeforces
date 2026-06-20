#include <bits/stdc++.h>

using namespace std;
int main(){
    int nA,nB; cin >> nA >> nB;
    int k,m; cin >> k >> m;
    vector<int> a(nA);
    for (int i = 0; i < nA; i++)
        cin >> a[i];
    vector<int> b(nB);
    for (int i = 0; i < nB; i++)
        cin >> b[i];
    if(a[k-1] < b[nB-m]) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

