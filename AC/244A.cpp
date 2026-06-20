#include <bits/stdc++.h>

using namespace std;
int main(){
    int  n,k; cin >> n >> k;
    vector<int> a(k);
    vector<int> orange(n*k+1,1);
    for (int i = 0; i < k; i++){
        cin >> a[i];
        orange[a[i]] = -1;
    }
    int tmp = 1;
    for(int i = 1; i <= k; i++){
        cout << a[i-1] << " ";
        for (int i = 2; i <= n; ){
            if (orange[tmp] != -1){
                cout << tmp << " ";
                orange[tmp] = -1;
                i++;
            }else{
                tmp++;
            }
        }
        cout << endl;

    }
    return 0;
}
