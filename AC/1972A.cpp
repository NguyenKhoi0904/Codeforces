#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int c = 0;
        for(int i = 0; i < n; i++){
            if (a[i] > b[i]){
                a.insert(a.begin()+i,b[i]);
                a.pop_back();
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}

