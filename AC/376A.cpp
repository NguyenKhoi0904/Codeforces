#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    long long n = s.size();
    long long pos = s.find('^');
    long long left = 0, right = 0;
    for(int i = 0; i < pos; i++){
        if(isdigit(s[i])){
            left = left + (s[i]- '0') * (pos-i);
        }
    }
    for(int i = pos+1; i < n; i++){
        if(isdigit(s[i])){
            right = right + (s[i] - '0') * (i-pos);
        }
    }
    if (left == right) cout << "balance\n";
    else if (left > right) cout << "left\n";
    else cout << "right\n";
    return 0;
}

