#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    int minute = 0, stand = 0, sit = 0;
    for (char e : s){
        if (e == 'x') sit++;
        else stand++;
    }
    minute = abs(n/2 - max(stand,sit));
    if (stand > sit){
        int i = 0;
        while(stand != sit){
            if(s[i] == 'X'){
                s[i] = 'x';
                stand--;
                sit++;
            }
            i++;
        }
    }else if (stand < sit){
        int i = 0;
        while(stand != sit){
            if (s[i] == 'x'){
                s[i] = 'X';
                sit--;
                stand++;
            }
            i++;
        }
    }
    cout << minute << endl;
    cout << s << endl;
    return 0;
}

