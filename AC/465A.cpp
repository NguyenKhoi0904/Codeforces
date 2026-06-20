#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    int l = 0;
    for(int i = 0; i < n; i++){
        if (s[i] != '0'){
            l++;
        }else{
        break;}
    }
    l = (l==n)?(l):(l+1);
    cout << l << endl;
    return 0;
}

