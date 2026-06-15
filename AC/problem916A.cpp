#include <bits/stdc++.h>

using namespace std;
int main(){
    int x; cin >> x;
    int tmp;
    int hh, mm; cin >> hh >> mm;
    int t = 0;
    while(hh % 10 != 7 && mm % 10 != 7){
        if (mm - x < 0){
            tmp = x;
            tmp = tmp - mm - 1;
            mm = 59;
            mm = mm - tmp;
            hh--;
            t++;
        }else{
            mm = mm - x;
            t++;
        }
        if (hh < 0){
            hh = 23;
        }
    }
    cout << t << endl;
    return 0;
}

