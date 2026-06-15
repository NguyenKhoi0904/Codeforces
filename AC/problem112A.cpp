#include <bits/stdc++.h>

using namespace std;
int main(){
    string s1,s2; cin >> s1 >> s2;
    int n = s1.size();
    for (char &c: s1){
        c = tolower(c);
    }
    for (char &c: s2){
        c = tolower(c);
    }
    for (int i = 0; i < n; i++){
        if (s1[i] < s2[i]){
            cout << "-1" << endl;
            return 0;
        }else if (s1[i] > s2[i]){
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;
    return 0;
}

