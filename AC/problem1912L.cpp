#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    int l = 0, o = 0;
    for (char e : s){
        if (e == 'L')   l++;
        else o++;
    }
    int k = 0;
    for (int i = 1; i < n; i++){
        int my_l = 0, my_o = 0;
        for (int j = 0; j < i; j++){
            if (s[j] == 'L')    my_l++;
            else my_o++;
        }
        if (my_l != (l - my_l) && my_o != (o - my_o)){
            k = my_l + my_o;
            break;
        }
    }
    if (k)  cout << k << endl;
    else cout << -1 << endl;
    return 0;
}

