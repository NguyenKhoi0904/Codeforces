#include <bits/stdc++.h>

using namespace std;
int f(vector<int> &a, int l, int r) {
    int result = 0;
    for (int i = l; i < r; ++i) {
        result |= a[i];
    }
    return result;
}
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int m = INT_MIN, tmp = 0;
    for(int i = 0; i < n; i++){
        tmp = f(a,i,n) + f(b,i,n);
        m = max(m,tmp);
    }
    for(int i = n; i >= 0; i--){
        tmp = f(a,0,i) + f(b,0,i);
        m = max(m,tmp);
    }
    cout << m << endl;
    return 0;
}

