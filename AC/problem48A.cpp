#include <bits/stdc++.h>

using namespace std;
int main(){
    string f,m,s; cin >> f >> m >> s;
    if ((f == m && m == s) || (f != m && m != s && f != s)) cout << '?' << endl;
    else if (f == m){
        switch(f[0]){
        case 'r':
            if (s[0] == 'p') cout << 'S' << endl;
            else cout << '?' << endl;
            break;
        case 'p':
            if(s[0] == 's') cout << 'S' << endl;
            else cout << '?' << endl;
            break;
        case 's':
            if(s[0] == 'r') cout << 'S' << endl;
            else cout << '?' << endl;
            break;
        }
    }else if (f == s){
            switch(f[0]){
            case 'r':
                if (m[0] == 'p') cout << 'M' << endl;
                else cout << '?' << endl;
                break;
            case 'p':
                if (m[0] == 's') cout << 'M' << endl;
                else cout << '?' << endl;
                break;
            case 's':
                if (m[0] == 'r') cout << 'M' << endl;
                else cout << '?' << endl;
                break;
            }
        }else{
         switch(s[0]){
         case 'r':
                if (f[0] == 'p') cout << 'F' << endl;
                else cout << '?' << endl;
                break;
         case 'p':
                if (f[0] == 's') cout << 'F' << endl;
                else cout << '?' << endl;
                break;
         case 's':
                if (f[0] == 'r') cout << 'F' << endl;
                else cout << '?' << endl;
                break;
         }
    }
    return 0;
}

