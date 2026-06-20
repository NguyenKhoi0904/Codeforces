#include <bits/stdc++.h>

using namespace std;
void Solve(){
    string s; cin >> s;
    int n = s.size();
    if (s == "()"){
        cout << "NO\n";
        return;
    }
    string ans, ans1 = "";
    for(int i = 0; i < n; i++){
        ans += "(";
    }
    for(int i = 0; i < n; i++){
        ans += ")";
    }

    for(int i = 0; i < n; i++){
        ans1 += "()";
    }
    if (ans.find(s) != string::npos){
        cout << "YES\n";
        cout << ans1 << endl;
    }else{
        cout << "YES\n";
        cout << ans << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}

//    bool flag = true;
//    for(int i = 0; i < n; i++){
//        if(s[i] == ')'){
//            if(flag){
//                ans.insert(0,"()");
//                flag = false;
//            }else{
//                ans += "()";
//            }
//        }else{
//            if (!flag){
//                ans.insert(ans.begin()+0,'(');
//                ans += ')';
//                flag = true;
//            }else{
//                ans += "()";
//            }
//        }
//    }
