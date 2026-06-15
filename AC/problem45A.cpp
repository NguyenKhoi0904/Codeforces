#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    vector<string> v ={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int k; cin >> k;
    int n = v.size()-1;
    int tmp;
    for (int i = 0; i < n+1; i++){
        if (v[i] == s){
            tmp = i;
            break;
        }
    }

    if (k > 12){
        k = k%12;
        if (tmp + k > n){
            k = k - (n-tmp);
            cout << v[k-1] << endl;
        }else cout << v[k+tmp] << endl;
    }else{
        if (tmp + k > n){
            k = k - (n-tmp);
            cout << v[k-1] << endl;
        }else cout << v[k+tmp] << endl;
    }
    return 0;
}

