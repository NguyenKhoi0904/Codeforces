#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int e : a){
        if (e <= 1399){
            cout << "Division 4" << endl;
        }else if (e >= 1400 && e <= 1599){
                cout << "Division 3" << endl;
        }else if (e >= 1500 && e <= 1899){
                cout << "Division 2" << endl;
        }else{
            cout << "Division 1" << endl;
        }
    }
    return 0;
}

