#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int x = (n-1)/2;
//    for(int i = 1;i < n; i++)
//        x = a[i] - a[i-1];
    cout << a[x] << endl;
    return 0;
}

