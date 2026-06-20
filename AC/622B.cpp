#include <bits/stdc++.h>

using namespace std;
int main(){
    string s; cin >> s;
    int a; cin >> a;
    int hh = stoi(s.substr(0,2)),mm = stoi(s.substr(3,2));
    mm += a;
    if (mm/60 > 0){
        hh = hh + mm/60;
        mm = mm%60;
        if (hh > 23){
            hh = hh%24;
        }
         cout << setfill('0') << setw(2) << hh << ":"
         << setfill('0') << setw(2) << mm << endl;
    }else{
         cout << setfill('0') << setw(2) << hh << ":"
         << setfill('0') << setw(2) << mm << endl;
    }
    return 0;
}

