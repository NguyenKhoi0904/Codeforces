#include <bits/stdc++.h>

using namespace std;
int main(){
    string str = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char direction; cin >> direction;
    string s; cin >> s;
    if (direction == 'L'){
        for(char &e : s){
            size_t pos = str.find(e);
            e = str[pos+1];
        }
    }else{
        for(char &e : s){
            size_t pos = str.find(e);
            e = str[pos-1];
        }
    }
    cout << s << endl;
    return 0;
}

