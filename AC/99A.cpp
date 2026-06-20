#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int i = s.find('.');
    if(s[i-1] == '9') cout << "GOTO Vasilisa." << endl;
    else if (s[i+1] >= '5'){
        s[i-1] = s[i-1] + 1;
        cout << s.substr(0,i) << endl;
    }else{
        cout << s.substr(0,i) << endl;
    }
    return 0;
}

