#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    long long int step = 0;
    int min = a[0];
    bool flag = true;
    for (int i = 1; i < n; i++){
        if (a[i] == a[0]) continue;
        else{
            if ((a[i]-min)%k != 0){
                flag = false;
                break;
            }else{
                step = step + ((a[i]-min)/k);
            }
        }
    }
    if (flag) cout << step << endl;
    else cout << -1 << endl;
    return 0;
}
