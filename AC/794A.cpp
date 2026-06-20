#include <bits/stdc++.h>

using namespace std;
int main(){
    int a,b,c; cin >> a >> b >> c;
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int bank_notes = 0;
    for (int i = 0; i < n; i++){
        if (v[i] > b && v[i] < c) bank_notes++;
    }
    cout << bank_notes << endl;
    return 0;
}

