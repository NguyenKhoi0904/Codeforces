#include <bits/stdc++.h>

using namespace std;
int main(){
    int t = 3;
    while(t--){
        string s; cin >> s;
        int upper = 0, lower = 0;
        for (char c: s){
            int temp = static_cast<int>(c);
            if (temp >= 65 && temp <= 90)   upper++;
            else lower++;
        }
        if (upper <= lower){
            for (char &c : s){
                c = tolower(c);
            }
        }else{
            for (char &c : s){
                c = toupper(c);
            }
        }
        cout << s << endl;
    }
    return 0;
}

