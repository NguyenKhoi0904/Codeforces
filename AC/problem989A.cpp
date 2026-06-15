#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int n = s.size();
    if(n <= 2){
        cout << "NO\n";
        return 0;
    }
    unordered_map<char,int> unm;
    bool flag = false;
    for(int i = 1; i < n-1; i++){
        if(s[i] != '.'){
            if (s[i] != s[i-1] && s[i] != s[i+1] && s[i-1]!= s[i+1] && (s[i-1] != '.') && (s[i+1] != '.')){
                cout << "YES\n";
                return 0;
            }
        }else{

        }
    }
    cout << "NO\n";
    return 0;
}
//CA.ABB.CC.B.C.BBBABAAB.BBBAACACAAA.C.AACA.AAC.C.BCCB.CCBC.C..CCACA.CBCCB.CCAABAAB.AACAA..A.AAA.
