#include <bits/stdc++.h>

using namespace std;
string removeZeroFirst(string s){
    int pos = 0;
    while(pos < s.size() && s[pos] == '0') pos++;
    if (pos == s.size()) return "0";
    return s.substr(pos);
}
int main(){
    string a,b; cin >> a >> b;
    string x = removeZeroFirst(a),y = removeZeroFirst(b);
    if (x.size()>y.size()) cout << ">\n";
    else if (x.size() < y.size()) cout << "<\n";
    else{
        for(int i = 0; i < x.size(); i++){
            if(x[i] > y[i]){
                cout << ">\n";
                return 0;
            }else if (x[i] < y[i]){
                cout << "<\n";
                return 0;
            }
        }
        cout << "=\n";
    }
    return 0;
}

