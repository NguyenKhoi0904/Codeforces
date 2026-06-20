#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,h; cin >> n >> h;
    int *a = new int[n];
    for (int i = 0; i<n; i++)
        cin >> a[i];
    int r = 0;
    for (int i = 0; i < n; i++){
        if (a[i] <= h)
            r+=1;
        else r+=2;
    }
    cout << r << endl;
    delete[] a;
    return 0;
}

