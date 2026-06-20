#include <bits/stdc++.h>

using namespace std;
int main(){
    int y; cin >> y;
    while(true){
        y++;
        string s = to_string(y);
        set<char> se;
        for(char c : s){
            se.insert(c);
        }
        if(se.size()==4){
            cout << y << endl;
            break;
        }
    }
    return 0;
}

