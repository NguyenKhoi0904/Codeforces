#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();
        bool flag = true;
        if (n % 2 != 0){
            flag = false;
        }else{
            int length = s.size();
            int mid = length/2;
            if (s.substr(0,mid) != s.substr(mid,length-mid)){
                flag = false;
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

