#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        string a,b; cin >> a >> b;
        int k = 0;
        int index = 0;
        for (int i = 0; i < n; i++){
            int tmp = k;
            for(int j = index; j < m; j++){
                if (a[i] == b[j]){
                    index = j+1;
                    k++;
                    break;
                }
            }
            if (tmp == k){
                break;
            }
        }
        cout << k << endl;
    }
    return 0;
}

