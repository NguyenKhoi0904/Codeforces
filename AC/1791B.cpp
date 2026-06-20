#include <bits/stdc++.h>

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int x = 0,y = 0;
        bool flag = false;
        for (char e: s){
            switch (e){
            case 'U':
                y+=1;
                break;
            case 'R':
                x+=1;
                break;
            case 'D':
                y-=1;
                break;
            case 'L':
                x-=1;
                break;
            }
            if (x == 1 && y == 1){
                flag = true;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

