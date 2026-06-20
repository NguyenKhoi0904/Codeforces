#include <bits/stdc++.h>

using namespace std;
int main(){
    int n = 4;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0; i < n-1; i++){
        cout << a[n-1] - a[i] << " ";
    }
    return 0;
}
