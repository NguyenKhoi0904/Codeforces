#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool flag = true;
        int minium = 0;
        for(int i = 0; i < n; i++){
            if (i % 2 == 0){
                if (a[i] % 2 != 0){
                    bool tmp = false;
                    for (int j = i+1; j < n;j++){
                        if (a[j] % 2 == 0 && j % 2 != 0){
                            swap(a[i],a[j]);
                            minium++;
                            tmp = true;
                            break;
                        }
                    }
                    if (!tmp){
                        flag = false;
                        break;
                    }
                }
            }
            else{
                if (a[i] % 2 == 0){
                    bool tmp = false;
                    for (int j = i+1; j < n;j++){
                        if (a[j] % 2 != 0 && j % 2 == 0){
                            swap(a[i], a[j]);
                            minium++;
                            tmp = true;
                            break;
                        }
                    }
                    if (!tmp){
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag) cout << minium << endl;
        else cout << -1 << endl;
    }
    return 0;
}

