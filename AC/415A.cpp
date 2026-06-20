#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m; cin >> n >> m;
    vector<int> a(n,0);
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++){
        for(int j = b[i]-1; j < n; j++){
            if (a[j] == 0) a[j] = b[i];
        }
    }
    for(int e: a)
        cout << e << " ";
    cout << endl;
    return 0;
}

