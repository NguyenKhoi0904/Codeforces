#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int step = 0;
    int n = s.size();
    int tmp = 0;
    int c = 'a';
    for(int i = 0; i < n;i++){
        tmp = s[i]-c;
        if (tmp < 0) tmp *= -1;
        step += min(tmp,(26-tmp));
        c = s[i];
    }
    cout << step;
    return 0;
}

