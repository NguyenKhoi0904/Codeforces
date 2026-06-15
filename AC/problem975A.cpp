#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
//    set<char> s;
//    for(char e : a[0]){
//        s.insert(e);
//    }
    int c = 0;
    vector<set<char>> nn;
    for (int i = 0; i < n; i++){
        set<char> tmp;
        for(char e: a[i]){
            tmp.insert(e);
        }
        if (find(nn.begin(), nn.end(), tmp) == nn.end()){
            c++;
            nn.push_back(tmp);
        }
    }
    cout << c << endl;
    return 0;
}

