#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int min_i = 0;
        for (int i = 1; i < n; i++){
            if (a[min_i] > a[i]) min_i = i;
        }
        a[min_i]+=1;
        int maximum_product = 1;
        for (int e : a) maximum_product *= e;
        cout << maximum_product << endl;
    }
    return 0;
}


