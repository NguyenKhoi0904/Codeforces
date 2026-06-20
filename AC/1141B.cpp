#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0, c = 0;
    for(int i = 0; i < 2*n; i++){
        while(a[i%n] == 1){
            c++;
            i++;
        }
        ans = max(ans, c);
        c = 0;
    }
    if(a[0] == 1 && a[n-1] == 1 && ans < 2) cout << 2 << endl;
    else cout << ans << endl;
    return 0;
}

