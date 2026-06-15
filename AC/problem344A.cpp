#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    string tmp =  a[0];
    int group = 1;
    for (int i = 1; i < n; i++){
        if (a[i] != tmp){
            tmp = a[i];
            group++;
        }
    }
    cout << group << endl;
    return 0;
}

