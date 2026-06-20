#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int r = 0, bi = 0;
    for(int i = 0; i <n; i++){
        if(a[i] == 1 && b[i] == 0) r++;
        else if(a[i] == 0 && b[i] == 1) bi++;
    }
    if(r == 0){
        cout << -1 << endl;
    }else{
        cout << ceil(1.0*(bi+1)/r) << endl;
    }
    return 0;
}

