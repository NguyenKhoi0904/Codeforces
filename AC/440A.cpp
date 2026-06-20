#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 1; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    bool flag = true;
    int tmp;
    for (int i = 1; i < n; i++){
        if (a[i] != i){
            flag = false;
            tmp = i;
            break;
        }
    }
    if (flag) cout << n << endl;
    else cout << tmp << endl;
    return 0;
}

