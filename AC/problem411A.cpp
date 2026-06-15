#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int n = s.size();
    bool length = (n >= 5)?true:false;
    bool upper = false, lower = false, digit = false;
    for (char e : s){
        if (isupper(e) && !upper){
            upper = true;
            continue;
        }
        if (islower(e) && !lower){
            lower = true;
            continue;
        }
        if (isdigit(e) && !digit){
            digit = true;
            continue;
        }
        if (upper && lower && digit) break;
    }
    if (length && upper && lower && digit) cout << "Correct\n";
    else cout << "Too weak\n";
    return 0;
}
