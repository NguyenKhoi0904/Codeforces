#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s = to_string(n);
    int length = s.size();
    bool flag = true;
    int i = 0;
    for(i; i < length-1;i++){
        if (s[i] == '1'){
            if (s[i+1] == '4'){
                if (s[i+2] == '4'){
                    i += 2;
                }else{
                    i+=1;
                }
            }
        }else{
            flag = false;
            break;
        }
    }
    if (i < length){
        if (s[i] != '1'){
            flag = false;
        }
    }
    if(flag){
        cout << "YES\n";
    }else cout << "NO\n";

    return 0;
}


//        if (length == 1){
//        if (s[0] == '1') cout << "YES\n";
//        else cout << "NO\n";
//    }else{
//    }
