#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        size_t pos = s.find("mapie");
        int c_sp = 0;
        while(pos != string::npos){
            c_sp++;
            pos = s.find("mapie",pos+1);
        }
        int c1 = 0, c2 = 0;
        pos = s.find("map");
        while(pos != string::npos){
            c1++;
            pos = s.find("map",pos+1);
        }
        pos = s.find("pie");
        while(pos != string::npos){
            c2++;
            pos = s.find("pie",pos+1);
        }
        c1 = c1 - c_sp; c2 = c2 - c_sp;
        cout << c1 + c2 + c_sp << endl;
    }
    return 0;
}

