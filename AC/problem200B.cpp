#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    double p = 0.0;
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    p = sum*1.0/n;
    cout << p << endl;
    delete[] a;
    return 0;
}
