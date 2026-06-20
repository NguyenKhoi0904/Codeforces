#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    int *a = new int[t];
    for (int i = 0; i < t; i++)
        cin >> a[i];
    for (int i = 0; i < t; i++)
        a[i] = (a[i]-1)/2;
    for (int i = 0; i < t; i++)
        cout << a[i] << endl;
    delete[] a;
    return 0;
}
