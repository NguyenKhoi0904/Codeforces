#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    for(int i = 0; i < n; i++){
        if (sqrt(a[i]) != (int)sqrt(a[i])){
            cout << a[i] << endl;
            return 0;
        }
    }
    return 0;
}

