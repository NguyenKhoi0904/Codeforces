#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int p; cin >> p;
    int *a = new int[p];
    for (int i = 0; i < p; i++)
        cin >> a[i];
    int q; cin >> q;
    int *b = new int[q];
    for (int i = 0; i < q; i++)
        cin >> b[i];
    set<int> s;
    for (int i = 0; i < p; i++){
        s.insert(a[i]);
    }
    for (int i = 0; i < q; i++){
        s.insert(b[i]);
    }
    if (s.size() == n)  cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    delete[] a;
    delete[] b;
    return 0;
}
