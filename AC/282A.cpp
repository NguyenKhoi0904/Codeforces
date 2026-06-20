#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    string s;
    vector<string> v;
    int x = 0;
    for (int i = 0; i < n; i++){
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < n; i++){
        size_t pos = v[i].find("++");
        if (pos == string::npos){
            x--;
        }else{
            x++;
        }
    }
    cout << x << endl;
    return 0;
}

