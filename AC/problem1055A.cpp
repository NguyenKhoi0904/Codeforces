#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,s; cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    if (a[0] == 0 || ((a[s-1] == 0) && b[s-1] ==0)){
        cout << "NO\n";
        return 0;
    }
    if(a[s-1] == 1){
        cout << "YES\n";
        return 0;
    }
    for(int i = s; i < n; i++){
        if(a[i] == 1){
            if(b[i] == 1){
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}

