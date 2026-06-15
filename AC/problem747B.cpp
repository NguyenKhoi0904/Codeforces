#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    if (n % 4 == 0){
        int a = 0, g = 0, c = 0, t = 0;
        for(char e : s){
            if(e == 'A') a++;
            else if (e == 'G') g++;
            else if (e == 'C') c++;
            else if (e == 'T') t++;
        }
        int tmp = n/4;
        if (a > tmp || g > tmp || c > tmp || t > tmp){
            cout << "===\n";
        }else{
            for(char &e : s){
                if (e == '?'){
                    if (tmp - a > 0){
                        e = 'A';
                        a++;
                    }else if (tmp - g > 0){
                        e = 'G';
                        g++;
                    }else if (tmp - c > 0){
                        e = 'C';
                        c++;
                    }else if (tmp - t > 0){
                        e = 'T';
                        t++;
                    }
                }
            }
            cout << s << endl;
        }
    }else cout << "===\n";
    return 0;
}

