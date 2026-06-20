#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int result = 0;
    int score = a[k-1];
    for (int i = 0; i < n; i++){
        if (a[i] >= score && a[i] > 0)   result++;
    }
    cout << result << endl;
    delete[] a;
    return 0;
}


