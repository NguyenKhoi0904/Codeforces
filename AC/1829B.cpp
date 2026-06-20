#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int c = 0, m = 0;
        for(int e : a){
            if(e == 0) c++;
            else{
                m = max(m,c);
                c = 0;
            }
        }
        cout << max(m,c) << endl;
    }
    return 0;
}
