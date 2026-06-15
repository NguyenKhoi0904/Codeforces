#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    string ans;
    for (int i = 0; i < n;){
        if(i+2 < n && s.substr(i,3) == "ogo"){
            ans += "***";
            i+=3;
            while(i+1 < n && s.substr(i,2) == "go"){
                i+=2;
            }
        }else{
            ans += s[i];
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}

