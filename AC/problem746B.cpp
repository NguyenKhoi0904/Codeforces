#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    string result;
    bool flag = true;
    if (n%2==0){
        for(char e : s){
            if(flag){
                result.insert(result.begin()+0,e);
                flag = false;
            }else{
                result+=e;
                flag= true;
            }
        }
    }else{
        for(char e: s){
            if(flag){
                result+=e;
                flag = false;
            }else{
                result.insert(result.begin()+0,e);
                flag = true;
            }
        }
    }
    cout << result << endl;
    return 0;
}

