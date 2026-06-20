#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            if (a[j]-1 == a[i]){
                for(int k = j+1; k < n; k++){
                    if (a[k]-1 == a[j]){
                        cout << "YES" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}

