#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int h = stoi(s.substr(0,2)), m = stoi(s.substr(3,2));
    string t; cin >> t;
    int hh = stoi(t.substr(0,2)), mm = stoi(t.substr(3,2));
    int hour = (h-hh+24)%24, minute = (m-mm+60)%60;
    if (m < mm){
        hour = (hour-1+24)%24;
    }
    cout << setw(2) << setfill('0')<< hour << ":" << setw(2) << setfill('0') << minute << endl;
    return 0;
}

