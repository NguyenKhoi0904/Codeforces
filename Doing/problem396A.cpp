#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m,k; cin >> n >> m >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int bowl = m, plate = k;
    int w = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            if(bowl > 0){
                bowl--;
            }else{
                w++;
//                bowl = k-1;
            }
        }else{
            if(plate > 0){
                plate--;
            }else if(bowl != 0){
                bowl--;
            }else{
                w++;
//                plate = k - 1;
//                bowl = m;
            }
        }
    }
    cout << w << endl;
    return 0;
}

